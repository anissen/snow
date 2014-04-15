#ifndef STATIC_LINK
#define IMPLEMENT_API
#endif

#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
// Include neko glue....
#define NEKO_COMPATIBLE
#endif

#include <hx/CFFI.h>

#ifdef ANDROID
#include <android/log.h>
#endif

#include "hx_bindings.h"
#include "lumen_core.h"
#include "lumen_window.h"

namespace lumen {

        //has id's etc been inited?
    static int global_lumen_init = false;
        //a "kind" type for native wrapped objects
    vkind global_lumen_object_kind;
        //core event haxe callback handler
        //a core system event handler implementation (defined in hx_bindings.h)
    AutoGCRoot *system_event_handler = 0;

    int id_id;
    int id_type;
    int id_width;
    int id_height;

    int id_window;
    int id_window_id;
    int id_title;
    int id_fullscreen;
    int id_resizable;
    int id_borderless;
    int id_antialiasing;
    int id_depth_buffer;
    int id_stencil_buffer;
    int id_vsync;
    int id_fps;

    extern "C" void lumen_entry_point() {

        if (global_lumen_init){
            return;
        }

       global_lumen_init = true;

       lumen_init_ids();

    } //lumen_entry_point

    DEFINE_ENTRY_POINT(lumen_entry_point)

    value lumen_init( value _on_event ) {

            //fetch the callback for system events
        system_event_handler = new AutoGCRoot(_on_event);

            //now init the core
        lumen_core_init();

        return alloc_null();
    
    } DEFINE_PRIM(lumen_init, 1);

    value lumen_shutdown() {

            //now shutdown the core
        lumen_core_shutdown();

        return alloc_null();
    
    } DEFINE_PRIM(lumen_shutdown, 0);


//Window

    value lumen_window_create( value _in_config, value _on_created ) {

            //fetch the callback for when it's done opening the window
        AutoGCRoot *on_created = new AutoGCRoot( _on_created );
            
            //fetch window config from the haxe side
        window_config config = window_config_from_hx(_in_config);
            //create the actual window
        create_window( config, on_created );

        return alloc_null();
    
    } DEFINE_PRIM(lumen_window_create, 2);


    value lumen_window_update( value _window ) {

        LumenWindow* window = NULL;

        if( Object_from_hx(_window, window) ) {

            window->update();

        } //fetch window

        return alloc_null();

    } DEFINE_PRIM(lumen_window_update, 1);

    value lumen_window_render( value _window ) {

        LumenWindow* window = NULL;

        if( Object_from_hx(_window, window) ) {

            window->render();

        } //fetch window

        return alloc_null();

    } DEFINE_PRIM(lumen_window_render, 1);


    value lumen_window_simple_message( value _window, value _message, value _title ) {

        LumenWindow* window = NULL;

        if( Object_from_hx(_window, window) ) {

            window->simple_message( val_string(_message), val_string(_title) );

        } //fetch window

        return alloc_null();

    } DEFINE_PRIM(lumen_window_simple_message, 3);


        // Reference this to bring in all 
        //the symbols for the static library
    #ifdef STATIC_LINK
        // extern "C" int nme_oglexport_register_prims();
    #endif //STATIC_LINK

    extern "C" int lumen_register_prims() {

       lumen_entry_point();
       
       return 0;

    } //lumen_register_prims

} //namespace lumen