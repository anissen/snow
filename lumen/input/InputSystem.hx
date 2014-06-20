package lumen.input;

import lumen.Lumen;
import lumen.types.Types;
import lumen.input.Input;

import lumen.utils.AbstractClass;
import lumen.window.Window;


#if lumen_html5

    @:noCompletion typedef InputSystem = lumen.platform.html5.input.InputSystem;

#else

    #if lumen_input_sdl
        @:noCompletion typedef InputSystem = lumen.platform.native.input.sdl.InputSystem;
    #else
        @:noCompletion typedef InputSystem = lumen.platform.native.input.InputSystem;
    #end

#end

/** Internal input system, accessed through `lumen.Input`, not directly */
@:noCompletion class InputSystemBinding implements AbstractClass {

    var manager : Input;
    var lib : Lumen;

        /** Called when the input manager initiates this system */
    public function init();
        /** Called when the input manager updates this system */
    public function process();
        /** Called when the input manager destroys this system */
    public function destroy();
        /** Called when the input manager forwards an event to this system */
    public function on_event( _event : InputEvent );
        /** Open a gamepad with this id */
    public function gamepad_add(id:Int);
        /** Close a gamepad with this id */
    public function gamepad_remove(id:Int);
        /** Listen for input events on the given window */
    @:noCompletion public function listen( window:Window );
        /** Stop listening for input events on the given window */
    @:noCompletion public function unlisten( window:Window );

} //InputSystemBinding