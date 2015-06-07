
[![Logo](../../../images/logo.png)](../../../api/index.html)

<hr/>
<a href="#" id="search_bar" onclick="return;"><div> search API <em>(or start typing anywhere)</em> </div></a>
<hr/>

<script src="../../../js/omnibar.js"> </script>
<link rel="stylesheet" type="text/css" href="../../../css/omnibar.css" media="all">

<div id="omnibar"> <a href="#" onclick="return" id="omnibar_close"></a> <input id="omnibar_text" type="text" placeholder="search types..."></input></div>
<script  id="typelist" data-relpath="../../../" data-types="snow.App,snow.AppFixedTimestep,snow.Snow,snow._Snow.Core,snow.api.Debug,snow.api.DebugError,snow.api.File,snow.api.FileHandle,snow.api.FileSeek,snow.api.Libs,snow.api.Promise,snow.api.PromiseError,snow.api.PromiseState,snow.api.Promises,snow.api.Timer,snow.api._Debug.LogError,snow.api._File.FileHandle_Impl_,snow.api._File.FileSeek_Impl_,snow.api._Promise.PromiseState_Impl_,snow.api.buffers.ArrayBuffer,snow.api.buffers.ArrayBufferIO,snow.api.buffers.ArrayBufferView,snow.api.buffers.Float32Array,snow.api.buffers.Float64Array,snow.api.buffers.Int16Array,snow.api.buffers.Int32Array,snow.api.buffers.Int8Array,snow.api.buffers.TAError,snow.api.buffers.TypedArrayType,snow.api.buffers.Uint16Array,snow.api.buffers.Uint32Array,snow.api.buffers.Uint8Array,snow.api.buffers.Uint8ClampedArray,snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_,snow.api.buffers._Float32Array.Float32Array_Impl_,snow.api.buffers._Float64Array.Float64Array_Impl_,snow.api.buffers._Int16Array.Int16Array_Impl_,snow.api.buffers._Int32Array.Int32Array_Impl_,snow.api.buffers._Int8Array.Int8Array_Impl_,snow.api.buffers._TypedArrayType.TypedArrayType_Impl_,snow.api.buffers._Uint16Array.Uint16Array_Impl_,snow.api.buffers._Uint32Array.Uint32Array_Impl_,snow.api.buffers._Uint8Array.Uint8Array_Impl_,snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_,snow.core.native.Core,snow.core.native._Core.StaticSnow,snow.core.native.assets.Assets,snow.core.native.assets._Assets.NativeAudioDataBlob,snow.core.native.assets._Assets.NativeAudioDataInfo,snow.core.native.assets._Assets.NativeAudioInfo,snow.core.native.audio.Audio,snow.core.native.audio.Sound,snow.core.native.input.Input,snow.core.native.io.IO,snow.core.native.window.Windowing,snow.modules.interfaces.Assets,snow.modules.interfaces.Audio,snow.modules.interfaces.IO,snow.modules.interfaces.Input,snow.modules.interfaces.Windowing,snow.modules.openal.AL,snow.modules.openal.ALC,snow.modules.openal.ALHelper,snow.modules.openal.Audio,snow.modules.openal.Context,snow.modules.openal.Device,snow.modules.openal.Sound,snow.modules.openal._AL.Context_Impl_,snow.modules.openal._AL.Device_Impl_,snow.modules.openal.sound.ALSound,snow.modules.openal.sound.ALStream,snow.modules.openal.sound.Sound,snow.modules.opengl.GL,snow.modules.opengl.GLActiveInfo,snow.modules.opengl.GLBuffer,snow.modules.opengl.GLContextAttributes,snow.modules.opengl.GLFramebuffer,snow.modules.opengl.GLProgram,snow.modules.opengl.GLRenderbuffer,snow.modules.opengl.GLShader,snow.modules.opengl.GLTexture,snow.modules.opengl.GLUniformLocation,snow.modules.opengl.native.GL,snow.modules.opengl.native.GLActiveInfo,snow.modules.opengl.native.GLBO,snow.modules.opengl.native.GLBuffer,snow.modules.opengl.native.GLContextAttributes,snow.modules.opengl.native.GLFBO,snow.modules.opengl.native.GLFramebuffer,snow.modules.opengl.native.GLObject,snow.modules.opengl.native.GLPO,snow.modules.opengl.native.GLProgram,snow.modules.opengl.native.GLRBO,snow.modules.opengl.native.GLRenderbuffer,snow.modules.opengl.native.GLSO,snow.modules.opengl.native.GLShader,snow.modules.opengl.native.GLShaderPrecisionFormat,snow.modules.opengl.native.GLTO,snow.modules.opengl.native.GLTexture,snow.modules.opengl.native.GLUniformLocation,snow.modules.opengl.native.GL_FFI,snow.modules.opengl.native._GL.GLBuffer_Impl_,snow.modules.opengl.native._GL.GLFramebuffer_Impl_,snow.modules.opengl.native._GL.GLProgram_Impl_,snow.modules.opengl.native._GL.GLRenderbuffer_Impl_,snow.modules.opengl.native._GL.GLShader_Impl_,snow.modules.opengl.native._GL.GLTexture_Impl_,snow.modules.opengl.native._GL.GLUniformLocation_Impl_,snow.modules.sdl.ControllerEventType,snow.modules.sdl.Input,snow.modules.sdl.KeyEventType,snow.modules.sdl.ModValue,snow.modules.sdl.MouseEventType,snow.modules.sdl.TouchEventType,snow.modules.sdl.Windowing,snow.modules.sdl._Input.ControllerEventType_Impl_,snow.modules.sdl._Input.KeyEventType_Impl_,snow.modules.sdl._Input.ModValue_Impl_,snow.modules.sdl._Input.MouseEventType_Impl_,snow.modules.sdl._Input.TouchEventType_Impl_,snow.system.assets.Asset,snow.system.assets.AssetBytes,snow.system.assets.AssetImage,snow.system.assets.AssetJSON,snow.system.assets.AssetText,snow.system.assets.Assets,snow.system.assets._Assets.AssetsModule,snow.system.audio.Audio,snow.system.audio.AudioModule,snow.system.audio.Sound,snow.system.input.Input,snow.system.input.Keycodes,snow.system.input.MapIntBool,snow.system.input.MapIntFloat,snow.system.input.Scancodes,snow.system.input._Input.InputModule,snow.system.io.IO,snow.system.io._IO.IOModule,snow.system.module.Assets,snow.system.module.Audio,snow.system.module.IO,snow.system.module.Input,snow.system.module.Sound,snow.system.module.Windowing,snow.system.window.Window,snow.system.window.Windowing,snow.system.window._Windowing.WindowHandleMap,snow.system.window._Windowing.WindowingModule,snow.types.AppConfig,snow.types.AppConfigNative,snow.types.AppConfigWeb,snow.types.Asset,snow.types.AssetBytes,snow.types.AssetImage,snow.types.AssetJSON,snow.types.AssetText,snow.types.AssetType,snow.types.AudioDataBlob,snow.types.AudioDataInfo,snow.types.AudioFormatType,snow.types.AudioHandle,snow.types.AudioInfo,snow.types.DisplayMode,snow.types.Error,snow.types.FileEvent,snow.types.FileEventType,snow.types.FileFilter,snow.types.GamepadDeviceEventType,snow.types.IODataOptions,snow.types.ImageInfo,snow.types.InputEvent,snow.types.InputEventType,snow.types.Key,snow.types.ModState,snow.types.OpenGLProfile,snow.types.Platform,snow.types.RenderConfig,snow.types.RenderConfigOpenGL,snow.types.Scan,snow.types.SnowConfig,snow.types.SystemEvent,snow.types.SystemEventType,snow.types.TextEventType,snow.types.WindowConfig,snow.types.WindowEvent,snow.types.WindowEventType,snow.types.WindowHandle,snow.types.WindowingConfig,snow.types._Types.AssetType_Impl_,snow.types._Types.AudioFormatType_Impl_,snow.types._Types.FileEventType_Impl_,snow.types._Types.GamepadDeviceEventType_Impl_,snow.types._Types.InputEventType_Impl_,snow.types._Types.OpenGLProfile_Impl_,snow.types._Types.Platform_Impl_,snow.types._Types.SystemEventType_Impl_,snow.types._Types.TextEventType_Impl_,snow.types._Types.WindowEventType_Impl_"></script>


<h1>ModState</h1>
<small>`snow.types.ModState`</small>

Input modifier state

<hr/>

`typedef`<br/><span class="meta">
meta: @:keep</span>

<hr/>


&nbsp;
&nbsp;




<h3>Members</h3> <hr/><span class="member apipage">
                <a name="shift"><a class="lift" href="#shift">shift</a></a><div class="clear"></div>
                <code class="signature apipage">shift : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">left or right shift key is down</span><br/><span class="member apipage">
                <a name="rshift"><a class="lift" href="#rshift">rshift</a></a><div class="clear"></div>
                <code class="signature apipage">rshift : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">right shift key is down</span><br/><span class="member apipage">
                <a name="rmeta"><a class="lift" href="#rmeta">rmeta</a></a><div class="clear"></div>
                <code class="signature apipage">rmeta : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">right windows/command key is down</span><br/><span class="member apipage">
                <a name="rctrl"><a class="lift" href="#rctrl">rctrl</a></a><div class="clear"></div>
                <code class="signature apipage">rctrl : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">right ctrl key is down</span><br/><span class="member apipage">
                <a name="ralt"><a class="lift" href="#ralt">ralt</a></a><div class="clear"></div>
                <code class="signature apipage">ralt : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">right alt/option key is down</span><br/><span class="member apipage">
                <a name="num"><a class="lift" href="#num">num</a></a><div class="clear"></div>
                <code class="signature apipage">num : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">numlock is enabled</span><br/><span class="member apipage">
                <a name="none"><a class="lift" href="#none">none</a></a><div class="clear"></div>
                <code class="signature apipage">none : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">no modifiers are down</span><br/><span class="member apipage">
                <a name="mode"><a class="lift" href="#mode">mode</a></a><div class="clear"></div>
                <code class="signature apipage">mode : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">mode key is down</span><br/><span class="member apipage">
                <a name="meta"><a class="lift" href="#meta">meta</a></a><div class="clear"></div>
                <code class="signature apipage">meta : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">left or right windows/command key is down</span><br/><span class="member apipage">
                <a name="lshift"><a class="lift" href="#lshift">lshift</a></a><div class="clear"></div>
                <code class="signature apipage">lshift : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">left shift key is down</span><br/><span class="member apipage">
                <a name="lmeta"><a class="lift" href="#lmeta">lmeta</a></a><div class="clear"></div>
                <code class="signature apipage">lmeta : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">left windows/command key is down</span><br/><span class="member apipage">
                <a name="lctrl"><a class="lift" href="#lctrl">lctrl</a></a><div class="clear"></div>
                <code class="signature apipage">lctrl : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">left ctrl key is down</span><br/><span class="member apipage">
                <a name="lalt"><a class="lift" href="#lalt">lalt</a></a><div class="clear"></div>
                <code class="signature apipage">lalt : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">left alt/option key is down</span><br/><span class="member apipage">
                <a name="ctrl"><a class="lift" href="#ctrl">ctrl</a></a><div class="clear"></div>
                <code class="signature apipage">ctrl : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">left or right ctrl key is down</span><br/><span class="member apipage">
                <a name="caps"><a class="lift" href="#caps">caps</a></a><div class="clear"></div>
                <code class="signature apipage">caps : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">capslock is enabled</span><br/><span class="member apipage">
                <a name="alt"><a class="lift" href="#alt">alt</a></a><div class="clear"></div>
                <code class="signature apipage">alt : [Bool](http://api.haxe.org/Bool.html)</code><br/></span>
            <span class="small_desc_flat">left or right alt/option key is down</span><br/>



<hr/>

&nbsp;
&nbsp;
&nbsp;
&nbsp;