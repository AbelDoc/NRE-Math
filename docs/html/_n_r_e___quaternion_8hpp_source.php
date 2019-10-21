<!-- HTML header for doxygen 1.8.8-->
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <!-- For Mobile Devices -->
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <meta http-equiv="Content-Type" content="text/xhtml;charset=UTF-8"/>
        <meta name="generator" content="Doxygen 1.8.11"/>
        <script type="text/javascript" src="../../js/jquery-2.1.1.min.js"></script>
        <title>NRE-Math: /mnt/c/Users/abell/Documents/GitHub/NRE-Math/src/Math/Quaternion/NRE_Quaternion.hpp Source File</title>
        <!--<link href="tabs.css" rel="stylesheet" type="text/css"/>-->
        <script type="text/javascript" src="dynsections.js"></script>
        <link href="search/search.css" rel="stylesheet" type="text/css"/>
<script type="text/javascript" src="search/searchdata.js"></script>
<script type="text/javascript" src="search/search.js"></script>
<script type="text/javascript">
  $(document).ready(function() { init_search(); });
</script>
        <link href="doxygen.css" rel="stylesheet" type="text/css" />
        <link href="style.css" rel="stylesheet" type="text/css"/>
        <link href='https://fonts.googleapis.com/css?family=Roboto+Slab' rel='stylesheet' type='text/css'>
        <?php
            include '../../php/navigation.php';
            if (!isset($_COOKIE["theme"]) || $_COOKIE["theme"] == "dark") {
                echo '<link href="../../css/dark/bootstrap.css" rel="stylesheet">';
            } else {
                echo '<link href="../../css/light/bootstrap.css" rel="stylesheet">';
            }
        ?>
        <script src="../../js/bootstrap.min.js"></script>
        <script type="text/javascript" src="doxy-boot.js"></script>
    </head>
    <body>
        <div class="container-fluid">
            <header class="page-header">
                <a href="../../../index.php">
                    <img src="../../img/Logo.png" class="logo img-responsive"/>
                </a>
            </header>
            <?php addNavigationBarInl(false); ?>
            <div id="top" class="row"><!-- do not remove this div, it is closed by doxygen! -->
                <div class="col-lg-12">
                    <div class="panel panel-default">
                        <div class="panel-body">
<!-- end header part -->
<!-- Generated by Doxygen 1.8.11 -->
<script type="text/javascript">
var searchBox = new SearchBox("searchBox", "search",false,'Search');
</script>
  <div id="navrow1" class="tabs">
    <ul class="tablist">
      <li><a href="index.php"><span>Main&#160;Page</span></a></li>
      <li><a href="namespaces.php"><span>Namespaces</span></a></li>
      <li><a href="annotated.php"><span>Classes</span></a></li>
      <li class="current"><a href="files.php"><span>Files</span></a></li>
      <li>
        <div id="MSearchBox" class="MSearchBoxInactive">
        <span class="left">
          <img id="MSearchSelect" src="search/mag_sel.png"
               onmouseover="return searchBox.OnSearchSelectShow()"
               onmouseout="return searchBox.OnSearchSelectHide()"
               alt=""/>
          <input type="text" id="MSearchField" value="Search" accesskey="S"
               onfocus="searchBox.OnSearchFieldFocus(true)" 
               onblur="searchBox.OnSearchFieldFocus(false)" 
               onkeyup="searchBox.OnSearchFieldChange(event)"/>
          </span><span class="right">
            <a id="MSearchClose" href="javascript:searchBox.CloseResultsWindow()"><img id="MSearchCloseImg" border="0" src="search/close.png" alt=""/></a>
          </span>
        </div>
      </li>
    </ul>
  </div>
  <div id="navrow2" class="tabs2">
    <ul class="tablist">
      <li><a href="files.php"><span>File&#160;List</span></a></li>
      <li><a href="globals.php"><span>File&#160;Members</span></a></li>
    </ul>
  </div>
<!-- window showing the filter options -->
<div id="MSearchSelectWindow"
     onmouseover="return searchBox.OnSearchSelectShow()"
     onmouseout="return searchBox.OnSearchSelectHide()"
     onkeydown="return searchBox.OnSearchSelectKey(event)">
</div>

<!-- iframe showing the search results (closed by default) -->
<div id="MSearchResultsWindow">
<iframe src="javascript:void(0)" frameborder="0" 
        name="MSearchResults" id="MSearchResults">
</iframe>
</div>

<div id="nav-path" class="navpath">
  <ul>
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_3813464283bee2267f39dcf080a84d74.php">Math</a></li><li class="navelem"><a class="el" href="dir_3bdf3edcab80ec8aaf365e04700bf3c7.php">Quaternion</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_Quaternion.hpp</div>  </div>
</div><!--header-->
<div class="contents">
<a href="_n_r_e___quaternion_8hpp.php">Go to the documentation of this file.</a><div class="fragment"><div class="line"><a name="l00001"></a><span class="lineno">    1</span>&#160;</div><div class="line"><a name="l00010"></a><span class="lineno">   10</span>&#160;<span class="preprocessor">     #pragma once</span></div><div class="line"><a name="l00011"></a><span class="lineno">   11</span>&#160;</div><div class="line"><a name="l00012"></a><span class="lineno">   12</span>&#160;<span class="preprocessor">     #include &lt;Utility/String/NRE_String.hpp&gt;</span></div><div class="line"><a name="l00013"></a><span class="lineno">   13</span>&#160;<span class="preprocessor">     #include &lt;iostream&gt;</span></div><div class="line"><a name="l00014"></a><span class="lineno">   14</span>&#160;</div><div class="line"><a name="l00015"></a><span class="lineno">   15</span>&#160;<span class="preprocessor">     #include &quot;../NRE_Math.hpp&quot;</span></div><div class="line"><a name="l00016"></a><span class="lineno">   16</span>&#160;<span class="preprocessor">     #include &quot;../NRE_Unit.hpp&quot;</span></div><div class="line"><a name="l00017"></a><span class="lineno">   17</span>&#160;<span class="preprocessor">     #include &lt;Utility/Interfaces/Stringable/NRE_Stringable.hpp&gt;</span></div><div class="line"><a name="l00018"></a><span class="lineno">   18</span>&#160;</div><div class="line"><a name="l00023"></a><span class="lineno">   23</span>&#160;    <span class="keyword">namespace </span><a class="code" href="namespace_n_r_e.php">NRE</a> {</div><div class="line"><a name="l00028"></a><span class="lineno">   28</span>&#160;        <span class="keyword">namespace </span><a class="code" href="namespace_math.php">Math</a> {</div><div class="line"><a name="l00029"></a><span class="lineno">   29</span>&#160;</div><div class="line"><a name="l00030"></a><span class="lineno">   30</span>&#160;            <span class="keyword">template</span>&lt;<span class="keyword">class</span>&gt; <span class="keyword">class </span>Vector3D;</div><div class="line"><a name="l00031"></a><span class="lineno">   31</span>&#160;            <span class="keyword">template</span>&lt;<span class="keyword">class</span>&gt; <span class="keyword">class </span>Vector4D;</div><div class="line"><a name="l00032"></a><span class="lineno">   32</span>&#160;</div><div class="line"><a name="l00037"></a><span class="lineno">   37</span>&#160;            <span class="keyword">template</span> &lt;<span class="keyword">class</span> T&gt;</div><div class="line"><a name="l00038"></a><span class="lineno">   38</span>&#160;            <span class="keyword">class </span>Quaternion : <span class="keyword">public</span> Utility::Stringable&lt;Quaternion&lt;T&gt;&gt; {</div><div class="line"><a name="l00039"></a><span class="lineno">   39</span>&#160;                <span class="keyword">private</span> :   <span class="comment">//Fields</span></div><div class="line"><a name="l00040"></a><span class="lineno">   40</span>&#160;                    Vector4D&lt;T&gt; quat;   </div><div class="line"><a name="l00042"></a><span class="lineno">   42</span>&#160;                <span class="keyword">public</span> :   <span class="comment">// Methods</span></div><div class="line"><a name="l00043"></a><span class="lineno">   43</span>&#160;                    <span class="comment">//## Constructor ##//</span></div><div class="line"><a name="l00047"></a><span class="lineno">   47</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00055"></a><span class="lineno">   55</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K, <span class="keyword">class</span> L, <span class="keyword">class</span> N, <span class="keyword">class</span> M&gt;</div><div class="line"><a name="l00056"></a><span class="lineno">   56</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>(K x, L y, N z, M w);</div><div class="line"><a name="l00064"></a><span class="lineno">   64</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K, <span class="keyword">class</span> L, <span class="keyword">class</span> N&gt;</div><div class="line"><a name="l00065"></a><span class="lineno">   65</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>(K x, L y, N z, Angle w);</div><div class="line"><a name="l00071"></a><span class="lineno">   71</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K, <span class="keyword">class</span> L&gt;</div><div class="line"><a name="l00072"></a><span class="lineno">   72</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>(Vector3D&lt;K&gt; <span class="keyword">const</span>&amp; ax, L an);</div><div class="line"><a name="l00078"></a><span class="lineno">   78</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00079"></a><span class="lineno">   79</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>(Vector3D&lt;K&gt; <span class="keyword">const</span>&amp; ax, Angle an);</div><div class="line"><a name="l00080"></a><span class="lineno">   80</span>&#160;</div><div class="line"><a name="l00081"></a><span class="lineno">   81</span>&#160;                    <span class="comment">//## Copy-Constructor ##//</span></div><div class="line"><a name="l00086"></a><span class="lineno">   86</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a> <span class="keyword">const</span>&amp; q) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00087"></a><span class="lineno">   87</span>&#160;</div><div class="line"><a name="l00088"></a><span class="lineno">   88</span>&#160;                    <span class="comment">//## Move-Constructor ##//</span></div><div class="line"><a name="l00093"></a><span class="lineno">   93</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a> &amp;&amp; q) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00094"></a><span class="lineno">   94</span>&#160;</div><div class="line"><a name="l00095"></a><span class="lineno">   95</span>&#160;                    <span class="comment">//## Convertor ##//</span></div><div class="line"><a name="l00100"></a><span class="lineno">  100</span>&#160;<span class="comment"></span>                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00101"></a><span class="lineno">  101</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>(Quaternion&lt;K&gt; <span class="keyword">const</span>&amp; q);</div><div class="line"><a name="l00102"></a><span class="lineno">  102</span>&#160;</div><div class="line"><a name="l00103"></a><span class="lineno">  103</span>&#160;                    <span class="comment">//## Deconstructor ##//</span></div><div class="line"><a name="l00107"></a><span class="lineno">  107</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a26b086d5b95d53024ad36e8e9141ea29">~Quaternion</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00108"></a><span class="lineno">  108</span>&#160;</div><div class="line"><a name="l00109"></a><span class="lineno">  109</span>&#160;                    <span class="comment">//## Getter ##//</span></div><div class="line"><a name="l00113"></a><span class="lineno">  113</span>&#160;<span class="comment"></span>                        T <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#aa0717eaee838e8a29dc6171a7adf2b73">getX</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00117"></a><span class="lineno">  117</span>&#160;                        T <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a2e025252dbd1aae5b9e610e856c745c2">getY</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00121"></a><span class="lineno">  121</span>&#160;                        T <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#ad19616cc2549941bac2569549d379131">getZ</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00125"></a><span class="lineno">  125</span>&#160;                        T <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#ac1e7605f337578de78e84c7087480f4a">getW</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00129"></a><span class="lineno">  129</span>&#160;                        Vector3D&lt;T&gt; <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a69cdacf9fabe116ef083ab918ac2865a">getAxis</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00133"></a><span class="lineno">  133</span>&#160;                        Vector4D&lt;T&gt; <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a51183223d4b9c7955bbe03d0147b48ff">getQuaternion</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00134"></a><span class="lineno">  134</span>&#160;</div><div class="line"><a name="l00135"></a><span class="lineno">  135</span>&#160;                    <span class="comment">//## Setter ##//</span></div><div class="line"><a name="l00140"></a><span class="lineno">  140</span>&#160;<span class="comment"></span>                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00141"></a><span class="lineno">  141</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#affd206d7637a82777bd2d5317f432068">setX</a>(K x);</div><div class="line"><a name="l00146"></a><span class="lineno">  146</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00147"></a><span class="lineno">  147</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a9c3b2a87afe4f292a3516520a205422f">setY</a>(K y);</div><div class="line"><a name="l00152"></a><span class="lineno">  152</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00153"></a><span class="lineno">  153</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a05d28d525f52e96129de19ca171a327e">setZ</a>(K z);</div><div class="line"><a name="l00158"></a><span class="lineno">  158</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00159"></a><span class="lineno">  159</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#aac0f84c92e58d56505375a990ba916d0">setW</a>(K w);</div><div class="line"><a name="l00165"></a><span class="lineno">  165</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00166"></a><span class="lineno">  166</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#ae1c53a59d250b7fb7d62437fa2625073">setAngleAxis</a>(Vector3D&lt;K&gt; <span class="keyword">const</span>&amp; axis, Angle w);</div><div class="line"><a name="l00170"></a><span class="lineno">  170</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a06ead9af6d624c1572b219a5a1825ce7">setIdentity</a>();</div><div class="line"><a name="l00171"></a><span class="lineno">  171</span>&#160;</div><div class="line"><a name="l00172"></a><span class="lineno">  172</span>&#160;                    <span class="comment">//## Members ##//</span></div><div class="line"><a name="l00176"></a><span class="lineno">  176</span>&#160;<span class="comment"></span>                        <span class="keywordtype">long</span> <span class="keywordtype">double</span> <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#ac2b4dc46655e5101cf571c2a9709592a">norm</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00180"></a><span class="lineno">  180</span>&#160;                        T <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a358ee2506666b99db64fdb522792cfe0">normSquared</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00184"></a><span class="lineno">  184</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a9361a0a54041ad7cf5d0bb706819b909">normalize</a>();</div><div class="line"><a name="l00188"></a><span class="lineno">  188</span>&#160;                        <span class="keyword">const</span> T* <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#af7e730e858812649b38fc1d3d68155a1">value</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00189"></a><span class="lineno">  189</span>&#160;</div><div class="line"><a name="l00190"></a><span class="lineno">  190</span>&#160;                    <span class="comment">//## Assignment Operator ##//</span></div><div class="line"><a name="l00196"></a><span class="lineno">  196</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a302245476a19a35d788e0959ce700028">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a> <span class="keyword">const</span>&amp; q) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00202"></a><span class="lineno">  202</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a302245476a19a35d788e0959ce700028">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a> &amp;&amp; q) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00208"></a><span class="lineno">  208</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00209"></a><span class="lineno">  209</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a302245476a19a35d788e0959ce700028">operator =</a>(Quaternion&lt;K&gt; <span class="keyword">const</span>&amp; q);</div><div class="line"><a name="l00215"></a><span class="lineno">  215</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00216"></a><span class="lineno">  216</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a302245476a19a35d788e0959ce700028">operator =</a>(Quaternion&lt;K&gt; &amp;&amp; q);</div><div class="line"><a name="l00217"></a><span class="lineno">  217</span>&#160;</div><div class="line"><a name="l00218"></a><span class="lineno">  218</span>&#160;                    <span class="comment">//## Shortcut Operator ##//</span></div><div class="line"><a name="l00224"></a><span class="lineno">  224</span>&#160;<span class="comment"></span>                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00225"></a><span class="lineno">  225</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">Quaternion</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a18a9d7d452320bb75d52dfa6adbe5028">operator*=</a>(Quaternion&lt;K&gt; <span class="keyword">const</span>&amp; q);</div><div class="line"><a name="l00226"></a><span class="lineno">  226</span>&#160;</div><div class="line"><a name="l00227"></a><span class="lineno">  227</span>&#160;                    <span class="comment">//## Arithmetic Operator ##//</span></div><div class="line"><a name="l00233"></a><span class="lineno">  233</span>&#160;<span class="comment"></span>                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00234"></a><span class="lineno">  234</span>&#160;                        Quaternion&lt;std::common_type_t&lt;T, K&gt;&gt; <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#aafb0e578c868b4753d61cd9d4b42a82e">operator*</a>(Quaternion&lt;K&gt; <span class="keyword">const</span>&amp; q) <span class="keyword">const</span>;</div><div class="line"><a name="l00235"></a><span class="lineno">  235</span>&#160;</div><div class="line"><a name="l00236"></a><span class="lineno">  236</span>&#160;                    <span class="comment">//## Stream Operator ##//</span></div><div class="line"><a name="l00241"></a><span class="lineno">  241</span>&#160;<span class="comment"></span>                        Utility::String <a class="code" href="class_n_r_e_1_1_math_1_1_quaternion.php#a6b212d1f08fc9a5935bd323b22b9c531">toString</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00242"></a><span class="lineno">  242</span>&#160;            };</div><div class="line"><a name="l00243"></a><span class="lineno">  243</span>&#160;        }</div><div class="line"><a name="l00244"></a><span class="lineno">  244</span>&#160;    }</div><div class="line"><a name="l00245"></a><span class="lineno">  245</span>&#160;</div><div class="line"><a name="l00246"></a><span class="lineno">  246</span>&#160;<span class="preprocessor">    #include &quot;NRE_Quaternion.tpp&quot;</span></div><div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_ad19616cc2549941bac2569549d379131"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#ad19616cc2549941bac2569549d379131">NRE::Math::Quaternion::getZ</a></div><div class="ttdeci">T getZ() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a302245476a19a35d788e0959ce700028"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a302245476a19a35d788e0959ce700028">NRE::Math::Quaternion::operator=</a></div><div class="ttdeci">Quaternion &amp; operator=(Quaternion const &amp;q)=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a9361a0a54041ad7cf5d0bb706819b909"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a9361a0a54041ad7cf5d0bb706819b909">NRE::Math::Quaternion::normalize</a></div><div class="ttdeci">void normalize()</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_affd206d7637a82777bd2d5317f432068"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#affd206d7637a82777bd2d5317f432068">NRE::Math::Quaternion::setX</a></div><div class="ttdeci">void setX(K x)</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a3f449cc3a127a054397bf884c2c02612"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a3f449cc3a127a054397bf884c2c02612">NRE::Math::Quaternion::Quaternion</a></div><div class="ttdeci">Quaternion()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a05d28d525f52e96129de19ca171a327e"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a05d28d525f52e96129de19ca171a327e">NRE::Math::Quaternion::setZ</a></div><div class="ttdeci">void setZ(K z)</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a2e025252dbd1aae5b9e610e856c745c2"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a2e025252dbd1aae5b9e610e856c745c2">NRE::Math::Quaternion::getY</a></div><div class="ttdeci">T getY() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a69cdacf9fabe116ef083ab918ac2865a"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a69cdacf9fabe116ef083ab918ac2865a">NRE::Math::Quaternion::getAxis</a></div><div class="ttdeci">Vector3D&lt; T &gt; getAxis() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a51183223d4b9c7955bbe03d0147b48ff"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a51183223d4b9c7955bbe03d0147b48ff">NRE::Math::Quaternion::getQuaternion</a></div><div class="ttdeci">Vector4D&lt; T &gt; const &amp; getQuaternion() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_ac1e7605f337578de78e84c7087480f4a"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#ac1e7605f337578de78e84c7087480f4a">NRE::Math::Quaternion::getW</a></div><div class="ttdeci">T getW() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a18a9d7d452320bb75d52dfa6adbe5028"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a18a9d7d452320bb75d52dfa6adbe5028">NRE::Math::Quaternion::operator*=</a></div><div class="ttdeci">Quaternion &amp; operator*=(Quaternion&lt; K &gt; const &amp;q)</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a26b086d5b95d53024ad36e8e9141ea29"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a26b086d5b95d53024ad36e8e9141ea29">NRE::Math::Quaternion::~Quaternion</a></div><div class="ttdeci">~Quaternion()=default</div></div>
<div class="ttc" id="namespace_math_php"><div class="ttname"><a href="namespace_math.php">Math</a></div><div class="ttdoc">Math&amp;#39;s API. </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_aac0f84c92e58d56505375a990ba916d0"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#aac0f84c92e58d56505375a990ba916d0">NRE::Math::Quaternion::setW</a></div><div class="ttdeci">void setW(K w)</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_af7e730e858812649b38fc1d3d68155a1"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#af7e730e858812649b38fc1d3d68155a1">NRE::Math::Quaternion::value</a></div><div class="ttdeci">const T * value() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a6b212d1f08fc9a5935bd323b22b9c531"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a6b212d1f08fc9a5935bd323b22b9c531">NRE::Math::Quaternion::toString</a></div><div class="ttdeci">Utility::String toString() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_ae1c53a59d250b7fb7d62437fa2625073"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#ae1c53a59d250b7fb7d62437fa2625073">NRE::Math::Quaternion::setAngleAxis</a></div><div class="ttdeci">void setAngleAxis(Vector3D&lt; K &gt; const &amp;axis, Angle w)</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a9c3b2a87afe4f292a3516520a205422f"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a9c3b2a87afe4f292a3516520a205422f">NRE::Math::Quaternion::setY</a></div><div class="ttdeci">void setY(K y)</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a358ee2506666b99db64fdb522792cfe0"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a358ee2506666b99db64fdb522792cfe0">NRE::Math::Quaternion::normSquared</a></div><div class="ttdeci">T normSquared() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_a06ead9af6d624c1572b219a5a1825ce7"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#a06ead9af6d624c1572b219a5a1825ce7">NRE::Math::Quaternion::setIdentity</a></div><div class="ttdeci">void setIdentity()</div></div>
<div class="ttc" id="namespace_n_r_e_php"><div class="ttname"><a href="namespace_n_r_e.php">NRE</a></div><div class="ttdoc">The NearlyRealEngine&amp;#39;s global namespace. </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve3D.cpp:14</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_aafb0e578c868b4753d61cd9d4b42a82e"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#aafb0e578c868b4753d61cd9d4b42a82e">NRE::Math::Quaternion::operator*</a></div><div class="ttdeci">Quaternion&lt; std::common_type_t&lt; T, K &gt; &gt; operator*(Quaternion&lt; K &gt; const &amp;q) const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_ac2b4dc46655e5101cf571c2a9709592a"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#ac2b4dc46655e5101cf571c2a9709592a">NRE::Math::Quaternion::norm</a></div><div class="ttdeci">long double norm() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_quaternion_php_aa0717eaee838e8a29dc6171a7adf2b73"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_quaternion.php#aa0717eaee838e8a29dc6171a7adf2b73">NRE::Math::Quaternion::getX</a></div><div class="ttdeci">T getX() const </div></div>
</div><!-- fragment --></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
