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
        <title>NRE-Math: /mnt/c/Users/abell/Documents/GitHub/NRE-Math/src/Math/Plane/NRE_Plane.hpp Source File</title>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_3813464283bee2267f39dcf080a84d74.php">Math</a></li><li class="navelem"><a class="el" href="dir_3e10adf8e95f1e65a0c670f6b8e472ad.php">Plane</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_Plane.hpp</div>  </div>
</div><!--header-->
<div class="contents">
<a href="_n_r_e___plane_8hpp.php">Go to the documentation of this file.</a><div class="fragment"><div class="line"><a name="l00001"></a><span class="lineno">    1</span>&#160;</div><div class="line"><a name="l00010"></a><span class="lineno">   10</span>&#160;<span class="preprocessor">     #pragma once</span></div><div class="line"><a name="l00011"></a><span class="lineno">   11</span>&#160;</div><div class="line"><a name="l00012"></a><span class="lineno">   12</span>&#160;<span class="preprocessor">     #include &quot;../Vector/3D/NRE_Vector3D.hpp&quot;</span></div><div class="line"><a name="l00013"></a><span class="lineno">   13</span>&#160;<span class="preprocessor">     #include &quot;../Vector/4D/NRE_Vector4D.hpp&quot;</span></div><div class="line"><a name="l00014"></a><span class="lineno">   14</span>&#160;</div><div class="line"><a name="l00019"></a><span class="lineno">   19</span>&#160;    <span class="keyword">namespace </span><a class="code" href="namespace_n_r_e.php">NRE</a> {</div><div class="line"><a name="l00024"></a><span class="lineno">   24</span>&#160;        <span class="keyword">namespace </span><a class="code" href="namespace_math.php">Math</a> {</div><div class="line"><a name="l00025"></a><span class="lineno">   25</span>&#160;</div><div class="line"><a name="l00030"></a><span class="lineno"><a class="line" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdb">   30</a></span>&#160;            <span class="keyword">enum</span> <a class="code" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdb">Face</a> {</div><div class="line"><a name="l00031"></a><span class="lineno"><a class="line" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbad7cad8ffc4be0b02532c3a41ff0570d1">   31</a></span>&#160;                <a class="code" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbad7cad8ffc4be0b02532c3a41ff0570d1">TOP</a>,        </div><div class="line"><a name="l00032"></a><span class="lineno"><a class="line" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbafeb942a49ad97806f95669273b437b26">   32</a></span>&#160;                <a class="code" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbafeb942a49ad97806f95669273b437b26">BOTTOM</a>,     </div><div class="line"><a name="l00033"></a><span class="lineno"><a class="line" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdba989129e5ae46b4aaff4bf4ae11a0b5e3">   33</a></span>&#160;                <a class="code" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdba989129e5ae46b4aaff4bf4ae11a0b5e3">LEFT</a>,       </div><div class="line"><a name="l00034"></a><span class="lineno"><a class="line" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbaadf20e95fd387f092e54cd7e868ccf4f">   34</a></span>&#160;                <a class="code" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbaadf20e95fd387f092e54cd7e868ccf4f">RIGHT</a>,      </div><div class="line"><a name="l00035"></a><span class="lineno"><a class="line" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbaa83f161aece2d3293d030b7af8037d15">   35</a></span>&#160;                <a class="code" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbaa83f161aece2d3293d030b7af8037d15">NEAR</a>,       </div><div class="line"><a name="l00036"></a><span class="lineno"><a class="line" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdba5bdf433d4ae77183c39421130163882e">   36</a></span>&#160;                <a class="code" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdba5bdf433d4ae77183c39421130163882e">FAR</a>,        </div><div class="line"><a name="l00038"></a><span class="lineno"><a class="line" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbaec11b0579fb60778fe86e3594e2e4b3d">   38</a></span>&#160;                <a class="code" href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbaec11b0579fb60778fe86e3594e2e4b3d">FACE_NUM</a>    </div><div class="line"><a name="l00039"></a><span class="lineno">   39</span>&#160;            };</div><div class="line"><a name="l00040"></a><span class="lineno">   40</span>&#160;</div><div class="line"><a name="l00045"></a><span class="lineno">   45</span>&#160;            <span class="keyword">template</span> &lt;<span class="keyword">class</span> T&gt;</div><div class="line"><a name="l00046"></a><span class="lineno">   46</span>&#160;            <span class="keyword">class </span><a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane</a> {</div><div class="line"><a name="l00047"></a><span class="lineno">   47</span>&#160;                <span class="keyword">private</span> :   <span class="comment">//Fields</span></div><div class="line"><a name="l00048"></a><span class="lineno">   48</span>&#160;                    <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Vector4D&lt;T&gt;</a> normal; </div><div class="line"><a name="l00049"></a><span class="lineno">   49</span>&#160;                    <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;T&gt;</a> point;   </div><div class="line"><a name="l00051"></a><span class="lineno">   51</span>&#160;                <span class="keyword">public</span> :   <span class="comment">// Methods</span></div><div class="line"><a name="l00052"></a><span class="lineno">   52</span>&#160;                    <span class="comment">//## Constructor ##//</span></div><div class="line"><a name="l00056"></a><span class="lineno">   56</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a7bc698f25c916183bcbb605e4b60377d">Plane</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00062"></a><span class="lineno">   62</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K, <span class="keyword">class</span> L&gt;</div><div class="line"><a name="l00063"></a><span class="lineno">   63</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a7bc698f25c916183bcbb605e4b60377d">Plane</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Vector4D&lt;K&gt;</a> <span class="keyword">const</span>&amp; n, <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;L&gt;</a> <span class="keyword">const</span>&amp; p);</div><div class="line"><a name="l00069"></a><span class="lineno">   69</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K, <span class="keyword">class</span> L&gt;</div><div class="line"><a name="l00070"></a><span class="lineno">   70</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a7bc698f25c916183bcbb605e4b60377d">Plane</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Vector3D&lt;K&gt;</a> <span class="keyword">const</span>&amp; n, <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;L&gt;</a> <span class="keyword">const</span>&amp; p);</div><div class="line"><a name="l00077"></a><span class="lineno">   77</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K, <span class="keyword">class</span> L, <span class="keyword">class</span> N&gt;</div><div class="line"><a name="l00078"></a><span class="lineno">   78</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a7bc698f25c916183bcbb605e4b60377d">Plane</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;K&gt;</a> <span class="keyword">const</span>&amp; p1, <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;L&gt;</a> <span class="keyword">const</span>&amp; p2, <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;N&gt;</a> <span class="keyword">const</span>&amp; p3);</div><div class="line"><a name="l00085"></a><span class="lineno">   85</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K, <span class="keyword">class</span> L, <span class="keyword">class</span> N&gt;</div><div class="line"><a name="l00086"></a><span class="lineno">   86</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a7bc698f25c916183bcbb605e4b60377d">Plane</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;K&gt;</a> <span class="keyword">const</span>&amp; p1, <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;L&gt;</a> <span class="keyword">const</span>&amp; p2, <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;N&gt;</a> <span class="keyword">const</span>&amp; p3);</div><div class="line"><a name="l00087"></a><span class="lineno">   87</span>&#160;</div><div class="line"><a name="l00088"></a><span class="lineno">   88</span>&#160;                    <span class="comment">//## Copy-Constructor ##//</span></div><div class="line"><a name="l00093"></a><span class="lineno">   93</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a7bc698f25c916183bcbb605e4b60377d">Plane</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane</a> <span class="keyword">const</span>&amp; p) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00094"></a><span class="lineno">   94</span>&#160;</div><div class="line"><a name="l00095"></a><span class="lineno">   95</span>&#160;                    <span class="comment">//## Move-Constructor ##//</span></div><div class="line"><a name="l00100"></a><span class="lineno">  100</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a7bc698f25c916183bcbb605e4b60377d">Plane</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane</a> &amp;&amp; p) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00101"></a><span class="lineno">  101</span>&#160;</div><div class="line"><a name="l00102"></a><span class="lineno">  102</span>&#160;                    <span class="comment">//## Convertor ##//</span></div><div class="line"><a name="l00107"></a><span class="lineno">  107</span>&#160;<span class="comment"></span>                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00108"></a><span class="lineno">  108</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a7bc698f25c916183bcbb605e4b60377d">Plane</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane&lt;K&gt;</a> <span class="keyword">const</span>&amp; p);</div><div class="line"><a name="l00109"></a><span class="lineno">  109</span>&#160;</div><div class="line"><a name="l00110"></a><span class="lineno">  110</span>&#160;                    <span class="comment">//## Deconstructor ##//</span></div><div class="line"><a name="l00114"></a><span class="lineno">  114</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a82e7af5642281d56674ecf427a3e5311">~Plane</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00115"></a><span class="lineno">  115</span>&#160;</div><div class="line"><a name="l00116"></a><span class="lineno">  116</span>&#160;                    <span class="comment">//## Getter ##//</span></div><div class="line"><a name="l00120"></a><span class="lineno">  120</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Vector4D&lt;T&gt;</a> <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a79d1c2c300ffd46fe05b3db73d3ba5e9">getNormal</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00124"></a><span class="lineno">  124</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;T&gt;</a> <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a03a5de5fa4540d7d5c10ade7699b6dd6">getPoint</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00125"></a><span class="lineno">  125</span>&#160;</div><div class="line"><a name="l00126"></a><span class="lineno">  126</span>&#160;                    <span class="comment">//## Setter ##//</span></div><div class="line"><a name="l00131"></a><span class="lineno">  131</span>&#160;<span class="comment"></span>                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00132"></a><span class="lineno">  132</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a14c3fd5788e0a2b6dd2e661b378f4134">setNormal</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Vector4D&lt;K&gt;</a> <span class="keyword">const</span>&amp; n);</div><div class="line"><a name="l00137"></a><span class="lineno">  137</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00138"></a><span class="lineno">  138</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a14c3fd5788e0a2b6dd2e661b378f4134">setNormal</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Vector3D&lt;K&gt;</a> <span class="keyword">const</span>&amp; n);</div><div class="line"><a name="l00143"></a><span class="lineno">  143</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00144"></a><span class="lineno">  144</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#ab03ffb32853e693a81fe0e5eea6ac526">setPoint</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;K&gt;</a> <span class="keyword">const</span>&amp; p);</div><div class="line"><a name="l00149"></a><span class="lineno">  149</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00150"></a><span class="lineno">  150</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#ab03ffb32853e693a81fe0e5eea6ac526">setPoint</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;K&gt;</a> <span class="keyword">const</span>&amp; p);</div><div class="line"><a name="l00156"></a><span class="lineno">  156</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K, <span class="keyword">class</span> L&gt;</div><div class="line"><a name="l00157"></a><span class="lineno">  157</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a38bdc9753134a68e0edb8633b061c6c7">setNormalAndPoint</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Vector4D&lt;K&gt;</a> <span class="keyword">const</span>&amp; n, <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;L&gt;</a> <span class="keyword">const</span>&amp; p);</div><div class="line"><a name="l00163"></a><span class="lineno">  163</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K, <span class="keyword">class</span> L&gt;</div><div class="line"><a name="l00164"></a><span class="lineno">  164</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a38bdc9753134a68e0edb8633b061c6c7">setNormalAndPoint</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Vector3D&lt;K&gt;</a> <span class="keyword">const</span>&amp; n, <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;L&gt;</a> <span class="keyword">const</span>&amp; p);</div><div class="line"><a name="l00165"></a><span class="lineno">  165</span>&#160;</div><div class="line"><a name="l00166"></a><span class="lineno">  166</span>&#160;                    <span class="comment">//## Methods ##//</span></div><div class="line"><a name="l00172"></a><span class="lineno">  172</span>&#160;<span class="comment"></span>                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00173"></a><span class="lineno">  173</span>&#160;                        std::common_type_t&lt;T, K&gt; <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a137f04ed1ac264233c1497c2e1720361">distance</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;K&gt;</a> <span class="keyword">const</span>&amp; p) <span class="keyword">const</span>;</div><div class="line"><a name="l00179"></a><span class="lineno">  179</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00180"></a><span class="lineno">  180</span>&#160;                        std::common_type_t&lt;T, K&gt; <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a137f04ed1ac264233c1497c2e1720361">distance</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;K&gt;</a> <span class="keyword">const</span>&amp; p) <span class="keyword">const</span>;</div><div class="line"><a name="l00181"></a><span class="lineno">  181</span>&#160;</div><div class="line"><a name="l00182"></a><span class="lineno">  182</span>&#160;                    <span class="comment">//## Assignment Operator ##//</span></div><div class="line"><a name="l00188"></a><span class="lineno">  188</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#aff4e35b9d557e9be76a2704d3b4a62c9">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane</a> <span class="keyword">const</span>&amp; p) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00194"></a><span class="lineno">  194</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#aff4e35b9d557e9be76a2704d3b4a62c9">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane</a> &amp;&amp; p) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00200"></a><span class="lineno">  200</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00201"></a><span class="lineno">  201</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#aff4e35b9d557e9be76a2704d3b4a62c9">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane&lt;K&gt;</a> <span class="keyword">const</span>&amp; p) ;</div><div class="line"><a name="l00207"></a><span class="lineno">  207</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00208"></a><span class="lineno">  208</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#aff4e35b9d557e9be76a2704d3b4a62c9">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane&lt;K&gt;</a> &amp;&amp; p);</div><div class="line"><a name="l00209"></a><span class="lineno">  209</span>&#160;</div><div class="line"><a name="l00210"></a><span class="lineno">  210</span>&#160;                    <span class="comment">//## Comparison Operator ##//</span></div><div class="line"><a name="l00216"></a><span class="lineno">  216</span>&#160;<span class="comment"></span>                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00217"></a><span class="lineno">  217</span>&#160;                        <span class="keywordtype">bool</span> <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a8d53debe9351959bc35c52a1e91702be">operator ==</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane&lt;K&gt;</a> <span class="keyword">const</span>&amp; p) <span class="keyword">const</span>;</div><div class="line"><a name="l00223"></a><span class="lineno">  223</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00224"></a><span class="lineno">  224</span>&#160;                        <span class="keywordtype">bool</span> <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a58a5d713ef0706697e553d02e762b5d9">operator !=</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_plane.php">Plane&lt;K&gt;</a> <span class="keyword">const</span>&amp; p) <span class="keyword">const</span>;</div><div class="line"><a name="l00225"></a><span class="lineno">  225</span>&#160;</div><div class="line"><a name="l00226"></a><span class="lineno">  226</span>&#160;                    <span class="comment">//## Stream Operator ##//</span></div><div class="line"><a name="l00231"></a><span class="lineno">  231</span>&#160;<span class="comment"></span>                        Utility::String <a class="code" href="class_n_r_e_1_1_math_1_1_plane.php#a6ac54819f460bf94e5be07455b54058f">toString</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00232"></a><span class="lineno">  232</span>&#160;</div><div class="line"><a name="l00233"></a><span class="lineno">  233</span>&#160;                <span class="keyword">private</span>:   <span class="comment">// Methods</span></div><div class="line"><a name="l00240"></a><span class="lineno">  240</span>&#160;<span class="comment"></span>                    <span class="keyword">template</span> &lt;<span class="keyword">class</span> K, <span class="keyword">class</span> L, <span class="keyword">class</span> N&gt;</div><div class="line"><a name="l00241"></a><span class="lineno">  241</span>&#160;                    <span class="keywordtype">void</span> computeNormalFrom3Point(<a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;K&gt;</a> <span class="keyword">const</span>&amp; p1, <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;L&gt;</a> <span class="keyword">const</span>&amp; p2, <a class="code" href="class_n_r_e_1_1_math_1_1_vector4_d.php">Point4D&lt;N&gt;</a> <span class="keyword">const</span>&amp; p3);</div><div class="line"><a name="l00242"></a><span class="lineno">  242</span>&#160;            };</div><div class="line"><a name="l00243"></a><span class="lineno">  243</span>&#160;</div><div class="line"><a name="l00250"></a><span class="lineno">  250</span>&#160;            <span class="keyword">template</span> &lt;<span class="keyword">class</span> T&gt;</div><div class="line"><a name="l00251"></a><span class="lineno">  251</span>&#160;            std::ostream&amp; operator &lt;&lt;(std::ostream&amp; stream, Plane&lt;T&gt; <span class="keyword">const</span>&amp; o);</div><div class="line"><a name="l00252"></a><span class="lineno">  252</span>&#160;        }</div><div class="line"><a name="l00253"></a><span class="lineno">  253</span>&#160;    }</div><div class="line"><a name="l00254"></a><span class="lineno">  254</span>&#160;</div><div class="line"><a name="l00255"></a><span class="lineno">  255</span>&#160;<span class="preprocessor">    #include &quot;NRE_Plane.tpp&quot;</span></div><div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_a7bc698f25c916183bcbb605e4b60377d"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#a7bc698f25c916183bcbb605e4b60377d">NRE::Math::Plane::Plane</a></div><div class="ttdeci">Plane()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_a14c3fd5788e0a2b6dd2e661b378f4134"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#a14c3fd5788e0a2b6dd2e661b378f4134">NRE::Math::Plane::setNormal</a></div><div class="ttdeci">void setNormal(Vector4D&lt; K &gt; const &amp;n)</div></div>
<div class="ttc" id="_n_r_e___plane_8hpp_php_a3b4330699dcee93a68dccfffe876ebdbaadf20e95fd387f092e54cd7e868ccf4f"><div class="ttname"><a href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbaadf20e95fd387f092e54cd7e868ccf4f">NRE::Math::RIGHT</a></div><div class="ttdef"><b>Definition:</b> NRE_Plane.hpp:34</div></div>
<div class="ttc" id="_n_r_e___plane_8hpp_php_a3b4330699dcee93a68dccfffe876ebdbaec11b0579fb60778fe86e3594e2e4b3d"><div class="ttname"><a href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbaec11b0579fb60778fe86e3594e2e4b3d">NRE::Math::FACE_NUM</a></div><div class="ttdef"><b>Definition:</b> NRE_Plane.hpp:38</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_a79d1c2c300ffd46fe05b3db73d3ba5e9"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#a79d1c2c300ffd46fe05b3db73d3ba5e9">NRE::Math::Plane::getNormal</a></div><div class="ttdeci">Vector4D&lt; T &gt; const &amp; getNormal() const </div></div>
<div class="ttc" id="_n_r_e___plane_8hpp_php_a3b4330699dcee93a68dccfffe876ebdba989129e5ae46b4aaff4bf4ae11a0b5e3"><div class="ttname"><a href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdba989129e5ae46b4aaff4bf4ae11a0b5e3">NRE::Math::LEFT</a></div><div class="ttdef"><b>Definition:</b> NRE_Plane.hpp:33</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_a58a5d713ef0706697e553d02e762b5d9"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#a58a5d713ef0706697e553d02e762b5d9">NRE::Math::Plane::operator!=</a></div><div class="ttdeci">bool operator!=(Plane&lt; K &gt; const &amp;p) const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_ab03ffb32853e693a81fe0e5eea6ac526"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#ab03ffb32853e693a81fe0e5eea6ac526">NRE::Math::Plane::setPoint</a></div><div class="ttdeci">void setPoint(Point4D&lt; K &gt; const &amp;p)</div></div>
<div class="ttc" id="namespace_math_php"><div class="ttname"><a href="namespace_math.php">Math</a></div><div class="ttdoc">Math&amp;#39;s API. </div></div>
<div class="ttc" id="_n_r_e___plane_8hpp_php_a3b4330699dcee93a68dccfffe876ebdbad7cad8ffc4be0b02532c3a41ff0570d1"><div class="ttname"><a href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbad7cad8ffc4be0b02532c3a41ff0570d1">NRE::Math::TOP</a></div><div class="ttdef"><b>Definition:</b> NRE_Plane.hpp:31</div></div>
<div class="ttc" id="_n_r_e___plane_8hpp_php_a3b4330699dcee93a68dccfffe876ebdbafeb942a49ad97806f95669273b437b26"><div class="ttname"><a href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbafeb942a49ad97806f95669273b437b26">NRE::Math::BOTTOM</a></div><div class="ttdef"><b>Definition:</b> NRE_Plane.hpp:32</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_vector3_d_php"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_vector3_d.php">NRE::Math::Vector3D</a></div><div class="ttdoc">A cartesian 3D vector, 2D homogeneous. </div><div class="ttdef"><b>Definition:</b> NRE_Matrix3x3.hpp:32</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_a8d53debe9351959bc35c52a1e91702be"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#a8d53debe9351959bc35c52a1e91702be">NRE::Math::Plane::operator==</a></div><div class="ttdeci">bool operator==(Plane&lt; K &gt; const &amp;p) const </div></div>
<div class="ttc" id="_n_r_e___plane_8hpp_php_a3b4330699dcee93a68dccfffe876ebdba5bdf433d4ae77183c39421130163882e"><div class="ttname"><a href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdba5bdf433d4ae77183c39421130163882e">NRE::Math::FAR</a></div><div class="ttdef"><b>Definition:</b> NRE_Plane.hpp:36</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_a03a5de5fa4540d7d5c10ade7699b6dd6"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#a03a5de5fa4540d7d5c10ade7699b6dd6">NRE::Math::Plane::getPoint</a></div><div class="ttdeci">Point4D&lt; T &gt; const &amp; getPoint() const </div></div>
<div class="ttc" id="_n_r_e___plane_8hpp_php_a3b4330699dcee93a68dccfffe876ebdbaa83f161aece2d3293d030b7af8037d15"><div class="ttname"><a href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdbaa83f161aece2d3293d030b7af8037d15">NRE::Math::NEAR</a></div><div class="ttdef"><b>Definition:</b> NRE_Plane.hpp:35</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php">NRE::Math::Plane</a></div><div class="ttdoc">A simple 4D homogeneous plane with a point and a vector. </div><div class="ttdef"><b>Definition:</b> NRE_Matrix4x4.hpp:35</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_aff4e35b9d557e9be76a2704d3b4a62c9"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#aff4e35b9d557e9be76a2704d3b4a62c9">NRE::Math::Plane::operator=</a></div><div class="ttdeci">Plane &amp; operator=(Plane const &amp;p)=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_a38bdc9753134a68e0edb8633b061c6c7"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#a38bdc9753134a68e0edb8633b061c6c7">NRE::Math::Plane::setNormalAndPoint</a></div><div class="ttdeci">void setNormalAndPoint(Vector4D&lt; K &gt; const &amp;n, Point4D&lt; L &gt; const &amp;p)</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_a137f04ed1ac264233c1497c2e1720361"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#a137f04ed1ac264233c1497c2e1720361">NRE::Math::Plane::distance</a></div><div class="ttdeci">std::common_type_t&lt; T, K &gt; distance(Point4D&lt; K &gt; const &amp;p) const </div></div>
<div class="ttc" id="namespace_n_r_e_php"><div class="ttname"><a href="namespace_n_r_e.php">NRE</a></div><div class="ttdoc">The NearlyRealEngine&amp;#39;s global namespace. </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve3D.cpp:14</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_vector4_d_php"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_vector4_d.php">NRE::Math::Vector4D</a></div><div class="ttdoc">A cartesian 4D vector, 3D homogeneous. </div><div class="ttdef"><b>Definition:</b> NRE_Matrix4x4.hpp:33</div></div>
<div class="ttc" id="_n_r_e___plane_8hpp_php_a3b4330699dcee93a68dccfffe876ebdb"><div class="ttname"><a href="_n_r_e___plane_8hpp.php#a3b4330699dcee93a68dccfffe876ebdb">NRE::Math::Face</a></div><div class="ttdeci">Face</div><div class="ttdef"><b>Definition:</b> NRE_Plane.hpp:30</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_a82e7af5642281d56674ecf427a3e5311"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#a82e7af5642281d56674ecf427a3e5311">NRE::Math::Plane::~Plane</a></div><div class="ttdeci">~Plane()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_plane_php_a6ac54819f460bf94e5be07455b54058f"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_plane.php#a6ac54819f460bf94e5be07455b54058f">NRE::Math::Plane::toString</a></div><div class="ttdeci">Utility::String toString() const </div></div>
</div><!-- fragment --></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
