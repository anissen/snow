
[![Logo](../../../images/logo.png)](../../../api/index.html)

<hr/>
<a href="#" id="search_bar" onclick="return;"><div> search API <em>(or start typing anywhere)</em> </div></a>
<hr/>

<script src="../../../js/omnibar.js"> </script>
<link rel="stylesheet" type="text/css" href="../../../css/omnibar.css" media="all">

<div id="omnibar"> <a href="#" onclick="return" id="omnibar_close"></a> <input id="omnibar_text" type="text" placeholder="search types..."></input></div>
<script  id="typelist" data-relpath="../../../" data-types="snow.App,snow.AppFixedTimestep,snow.Snow,snow._Snow.Core,snow.api.Debug,snow.api.DebugError,snow.api.File,snow.api.FileHandle,snow.api.FileSeek,snow.api.Libs,snow.api.Promise,snow.api.PromiseError,snow.api.PromiseState,snow.api.Promises,snow.api.Timer,snow.api._Debug.LogError,snow.api._File.FileHandle_Impl_,snow.api._File.FileSeek_Impl_,snow.api._Promise.PromiseState_Impl_,snow.api.buffers.ArrayBuffer,snow.api.buffers.ArrayBufferIO,snow.api.buffers.ArrayBufferView,snow.api.buffers.Float32Array,snow.api.buffers.Float64Array,snow.api.buffers.Int16Array,snow.api.buffers.Int32Array,snow.api.buffers.Int8Array,snow.api.buffers.TAError,snow.api.buffers.TypedArrayType,snow.api.buffers.Uint16Array,snow.api.buffers.Uint32Array,snow.api.buffers.Uint8Array,snow.api.buffers.Uint8ClampedArray,snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_,snow.api.buffers._Float32Array.Float32Array_Impl_,snow.api.buffers._Float64Array.Float64Array_Impl_,snow.api.buffers._Int16Array.Int16Array_Impl_,snow.api.buffers._Int32Array.Int32Array_Impl_,snow.api.buffers._Int8Array.Int8Array_Impl_,snow.api.buffers._TypedArrayType.TypedArrayType_Impl_,snow.api.buffers._Uint16Array.Uint16Array_Impl_,snow.api.buffers._Uint32Array.Uint32Array_Impl_,snow.api.buffers._Uint8Array.Uint8Array_Impl_,snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_,snow.core.native.Core,snow.core.native._Core.StaticSnow,snow.core.native.assets.Assets,snow.core.native.assets._Assets.NativeAudioDataBlob,snow.core.native.assets._Assets.NativeAudioDataInfo,snow.core.native.assets._Assets.NativeAudioInfo,snow.core.native.audio.Audio,snow.core.native.audio.Sound,snow.core.native.input.Input,snow.core.native.io.IO,snow.core.native.window.Windowing,snow.modules.interfaces.Assets,snow.modules.interfaces.Audio,snow.modules.interfaces.IO,snow.modules.interfaces.Input,snow.modules.interfaces.Windowing,snow.modules.openal.AL,snow.modules.openal.ALC,snow.modules.openal.ALHelper,snow.modules.openal.Audio,snow.modules.openal.Context,snow.modules.openal.Device,snow.modules.openal.Sound,snow.modules.openal._AL.Context_Impl_,snow.modules.openal._AL.Device_Impl_,snow.modules.openal.sound.ALSound,snow.modules.openal.sound.ALStream,snow.modules.openal.sound.Sound,snow.modules.opengl.GL,snow.modules.opengl.GLActiveInfo,snow.modules.opengl.GLBuffer,snow.modules.opengl.GLContextAttributes,snow.modules.opengl.GLFramebuffer,snow.modules.opengl.GLProgram,snow.modules.opengl.GLRenderbuffer,snow.modules.opengl.GLShader,snow.modules.opengl.GLTexture,snow.modules.opengl.GLUniformLocation,snow.modules.opengl.native.GL,snow.modules.opengl.native.GLActiveInfo,snow.modules.opengl.native.GLBO,snow.modules.opengl.native.GLBuffer,snow.modules.opengl.native.GLContextAttributes,snow.modules.opengl.native.GLFBO,snow.modules.opengl.native.GLFramebuffer,snow.modules.opengl.native.GLObject,snow.modules.opengl.native.GLPO,snow.modules.opengl.native.GLProgram,snow.modules.opengl.native.GLRBO,snow.modules.opengl.native.GLRenderbuffer,snow.modules.opengl.native.GLSO,snow.modules.opengl.native.GLShader,snow.modules.opengl.native.GLShaderPrecisionFormat,snow.modules.opengl.native.GLTO,snow.modules.opengl.native.GLTexture,snow.modules.opengl.native.GLUniformLocation,snow.modules.opengl.native.GL_FFI,snow.modules.opengl.native._GL.GLBuffer_Impl_,snow.modules.opengl.native._GL.GLFramebuffer_Impl_,snow.modules.opengl.native._GL.GLProgram_Impl_,snow.modules.opengl.native._GL.GLRenderbuffer_Impl_,snow.modules.opengl.native._GL.GLShader_Impl_,snow.modules.opengl.native._GL.GLTexture_Impl_,snow.modules.opengl.native._GL.GLUniformLocation_Impl_,snow.modules.sdl.ControllerEventType,snow.modules.sdl.Input,snow.modules.sdl.KeyEventType,snow.modules.sdl.ModValue,snow.modules.sdl.MouseEventType,snow.modules.sdl.TouchEventType,snow.modules.sdl.Windowing,snow.modules.sdl._Input.ControllerEventType_Impl_,snow.modules.sdl._Input.KeyEventType_Impl_,snow.modules.sdl._Input.ModValue_Impl_,snow.modules.sdl._Input.MouseEventType_Impl_,snow.modules.sdl._Input.TouchEventType_Impl_,snow.system.assets.Asset,snow.system.assets.AssetBytes,snow.system.assets.AssetImage,snow.system.assets.AssetJSON,snow.system.assets.AssetText,snow.system.assets.Assets,snow.system.assets._Assets.AssetsModule,snow.system.audio.Audio,snow.system.audio.AudioModule,snow.system.audio.Sound,snow.system.input.Input,snow.system.input.Keycodes,snow.system.input.MapIntBool,snow.system.input.MapIntFloat,snow.system.input.Scancodes,snow.system.input._Input.InputModule,snow.system.io.IO,snow.system.io._IO.IOModule,snow.system.module.Assets,snow.system.module.Audio,snow.system.module.IO,snow.system.module.Input,snow.system.module.Sound,snow.system.module.Windowing,snow.system.window.Window,snow.system.window.Windowing,snow.system.window._Windowing.WindowHandleMap,snow.system.window._Windowing.WindowingModule,snow.types.AppConfig,snow.types.AppConfigNative,snow.types.AppConfigWeb,snow.types.Asset,snow.types.AssetBytes,snow.types.AssetImage,snow.types.AssetJSON,snow.types.AssetText,snow.types.AssetType,snow.types.AudioDataBlob,snow.types.AudioDataInfo,snow.types.AudioFormatType,snow.types.AudioHandle,snow.types.AudioInfo,snow.types.DisplayMode,snow.types.Error,snow.types.FileEvent,snow.types.FileEventType,snow.types.FileFilter,snow.types.GamepadDeviceEventType,snow.types.IODataOptions,snow.types.ImageInfo,snow.types.InputEvent,snow.types.InputEventType,snow.types.Key,snow.types.ModState,snow.types.OpenGLProfile,snow.types.Platform,snow.types.RenderConfig,snow.types.RenderConfigOpenGL,snow.types.Scan,snow.types.SnowConfig,snow.types.SystemEvent,snow.types.SystemEventType,snow.types.TextEventType,snow.types.WindowConfig,snow.types.WindowEvent,snow.types.WindowEventType,snow.types.WindowHandle,snow.types.WindowingConfig,snow.types._Types.AssetType_Impl_,snow.types._Types.AudioFormatType_Impl_,snow.types._Types.FileEventType_Impl_,snow.types._Types.GamepadDeviceEventType_Impl_,snow.types._Types.InputEventType_Impl_,snow.types._Types.OpenGLProfile_Impl_,snow.types._Types.Platform_Impl_,snow.types._Types.SystemEventType_Impl_,snow.types._Types.TextEventType_Impl_,snow.types._Types.WindowEventType_Impl_"></script>


<h1>Promise</h1>
<small>`snow.api.Promise`</small>

The Promise interface represents a proxy for a value not necessarily
known when the promise is created. It allows you to associate handlers
to an asynchronous action's eventual success or failure. This lets asynchronous
methods return values like synchronous methods: instead of the final value,
the asynchronous method returns a promise of having a value at some point in the future.

A pending promise can become either fulfilled with a value, or
rejected with a reason. When either of these happens, the associated
handlers queued up by a promise's then method are called. (If the promise
has already been fulfilled or rejected when a corresponding handler is attached,
the handler will be called, so there is no race condition between an asynchronous
operation completing and its handlers being attached.)

As the Promise.prototype.then and Promise.prototype.error methods return promises,
they can be chained—an operation called composition.

Documentation provided mostly by MDN
licensed under CC-BY-SA 2.5. by Mozilla Contributors.
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Promise

<hr/>

`class`<br/><span class="meta">
meta: @:directlyUsed, @:keep, @:allow(snow.api.Promises)</span>

<hr/>


&nbsp;
&nbsp;




<h3>Members</h3> <hr/>


<h3>Methods</h3> <hr/><span class="method apipage">
            <a name="all"><a class="lift" href="#all">all</a></a><span class="inline-block static">static</span><div class="clear"></div>
            <code class="signature apipage">all(list:[Array](http://api.haxe.org/Array.html)&lt;[snow.api.Promise](../../../api/snow/api/Promise.html)&gt;<span></span>) : [snow.api.Promise](../../../api/snow/api/Promise.html)</code><br/><span class="small_desc_flat">The Promise.all(iterable) function returns a promise that
            resolves when all of the promises in the iterable argument
            have resolved. The result is passed as an array of values
            from all the promises.
            If any of the passed in promises rejects, the all Promise
            immediately rejects with the value of the promise that rejected,
            discarding all the other promises whether or not they have resolved.</span>


</span>
<span class="method apipage">
            <a name="error"><a class="lift" href="#error">error</a></a><div class="clear"></div>
            <code class="signature apipage">error&lt;T&gt;(on\_rejected:[error.T](#)<span></span>) : [snow.api.Promise](../../../api/snow/api/Promise.html)</code><br/><span class="small_desc_flat">The error function returns a Promise and deals with rejected cases only.
            It behaves the same as calling then(null, on_rejected).</span>


</span>
<span class="method apipage">
            <a name="new"><a class="lift" href="#new">new</a></a><div class="clear"></div>
            <code class="signature apipage">new&lt;T&gt;(func:[new.T](#)<span></span>) : [Void](http://api.haxe.org/Void.html)</code><br/><span class="small_desc_flat">Creates a new promise by providing a function with two callback arguments.
            Inside this function, invoking these callbacks controls the promise state.
            For example, if fetching a value async, and the operation fails, you would
            invoke the second callback with the reason/error. If the operation succeeded,
            you would invoke the first.</span>

```
new Promise(function(resolve, reject) {
    var value = get_value();
    if(value != null) {
        resolve(value);
    } else {
        reject(Error(...));
    }
});
```
</span>
<span class="method apipage">
            <a name="race"><a class="lift" href="#race">race</a></a><span class="inline-block static">static</span><div class="clear"></div>
            <code class="signature apipage">race(list:[Array](http://api.haxe.org/Array.html)&lt;[snow.api.Promise](../../../api/snow/api/Promise.html)&gt;<span></span>) : [snow.api.Promise](../../../api/snow/api/Promise.html)</code><br/><span class="small_desc_flat">The Promise.race function returns a promise that
            resolves or rejects as soon as one of the promises in the
            list resolves or rejects, with the value or reason from that promise.</span>


</span>
<span class="method apipage">
            <a name="reject"><a class="lift" href="#reject">reject</a></a><span class="inline-block static">static</span><div class="clear"></div>
            <code class="signature apipage">reject&lt;T&gt;(reason:[reject.T](#)<span></span>) : [snow.api.Promise](../../../api/snow/api/Promise.html)</code><br/><span class="small_desc_flat">The Promise.reject function returns a Promise object
            that is rejected with the optional reason.</span>


</span>
<span class="method apipage">
            <a name="resolve"><a class="lift" href="#resolve">resolve</a></a><span class="inline-block static">static</span><div class="clear"></div>
            <code class="signature apipage">resolve&lt;T&gt;(val:[resolve.T](#)<span></span>) : [snow.api.Promise](../../../api/snow/api/Promise.html)</code><br/><span class="small_desc_flat">The static Promise.resolve function returns a Promise object
            that is resolved with the given value.</span>


</span>
<span class="method apipage">
            <a name="then"><a class="lift" href="#then">then</a></a><div class="clear"></div>
            <code class="signature apipage">then&lt;T&gt;, T1&gt;(on\_fulfilled:[then.T](#)<span></span>, on\_rejected:[then.T](#)<span></span>) : [snow.api.Promise](../../../api/snow/api/Promise.html)</code><br/><span class="small_desc_flat">The then function returns a Promise. It takes two arguments,
            both are callback functions for the success and failure cases of the Promise.</span>

```
var load = promise_returning_function();

load.then(function(value:Type) {
    //use value
}).error(function(error:Error) {
    //use error
});
```
</span>



<hr/>

&nbsp;
&nbsp;
&nbsp;
&nbsp;