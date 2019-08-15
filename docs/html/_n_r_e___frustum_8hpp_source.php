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
        <title>NRE-Math: /mnt/c/Users/abell/Documents/GitHub/NRE-Math/src/Math/Frustum/NRE_Frustum.hpp Source File</title>
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_3813464283bee2267f39dcf080a84d74.php">Math</a></li><li class="navelem"><a class="el" href="dir_04356fb591a35ec7606e545595262676.php">Frustum</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_Frustum.hpp</div>  </div>
</div><!--header-->
<div class="contents">
<a href="_n_r_e___frustum_8hpp.php">Go to the documentation of this file.</a><div class="fragment"><div class="line"><a name="l00001"></a><span class="lineno">    1</span>&#160;</div><div class="line"><a name="l00010"></a><span class="lineno">   10</span>&#160;<span class="preprocessor">    #pragma once</span></div><div class="line"><a name="l00011"></a><span class="lineno">   11</span>&#160;</div><div class="line"><a name="l00012"></a><span class="lineno">   12</span>&#160;</div><div class="line"><a name="l00013"></a><span class="lineno">   13</span>&#160;<span class="preprocessor">    #include &lt;Utility/Array/NRE_Array.hpp&gt;</span></div><div class="line"><a name="l00014"></a><span class="lineno">   14</span>&#160;<span class="preprocessor">    #include &quot;../NRE_Unit.hpp&quot;</span></div><div class="line"><a name="l00015"></a><span class="lineno">   15</span>&#160;<span class="preprocessor">    #include &quot;../Plane/NRE_Plane.hpp&quot;</span></div><div class="line"><a name="l00016"></a><span class="lineno">   16</span>&#160;<span class="preprocessor">    #include &quot;../Vector/2D/NRE_Vector2D.hpp&quot;</span></div><div class="line"><a name="l00017"></a><span class="lineno">   17</span>&#160;<span class="preprocessor">    #include &quot;../Vector/3D/NRE_Vector3D.hpp&quot;</span></div><div class="line"><a name="l00018"></a><span class="lineno">   18</span>&#160;<span class="preprocessor">    #include &quot;../Matrix/4D/NRE_Matrix4x4.hpp&quot;</span></div><div class="line"><a name="l00019"></a><span class="lineno">   19</span>&#160;</div><div class="line"><a name="l00024"></a><span class="lineno">   24</span>&#160;    <span class="keyword">namespace </span><a class="code" href="namespace_n_r_e.php">NRE</a> {</div><div class="line"><a name="l00029"></a><span class="lineno">   29</span>&#160;        <span class="keyword">namespace </span><a class="code" href="namespace_math.php">Math</a> {</div><div class="line"><a name="l00030"></a><span class="lineno">   30</span>&#160;</div><div class="line"><a name="l00035"></a><span class="lineno"><a class="line" href="class_n_r_e_1_1_math_1_1_frustum.php">   35</a></span>&#160;            <span class="keyword">class </span><a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php">Frustum</a> {</div><div class="line"><a name="l00036"></a><span class="lineno">   36</span>&#160;                <span class="keyword">private</span>:    <span class="comment">//Fields</span></div><div class="line"><a name="l00037"></a><span class="lineno">   37</span>&#160;                    Utility::Array&lt;Plane&lt;float&gt;, 6&gt; planes; </div><div class="line"><a name="l00038"></a><span class="lineno">   38</span>&#160;                    <a class="code" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D&lt;float&gt;</a> near;                   </div><div class="line"><a name="l00039"></a><span class="lineno">   39</span>&#160;                    <a class="code" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D&lt;float&gt;</a> far;                    </div><div class="line"><a name="l00040"></a><span class="lineno">   40</span>&#160;                    <a class="code" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D&lt;float&gt;</a> dist;                   </div><div class="line"><a name="l00041"></a><span class="lineno">   41</span>&#160;                    <span class="keywordtype">float</span> ratio;                            </div><div class="line"><a name="l00042"></a><span class="lineno">   42</span>&#160;                    Angle fov;                              </div><div class="line"><a name="l00044"></a><span class="lineno">   44</span>&#160;                <span class="keyword">public</span>:    <span class="comment">// Methods</span></div><div class="line"><a name="l00045"></a><span class="lineno">   45</span>&#160;                    <span class="comment">//## Constructor ##//</span></div><div class="line"><a name="l00049"></a><span class="lineno">   49</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php#a8b8191a8bfe6f2502871132501ea7338">Frustum</a>() = <span class="keyword">delete</span>;</div><div class="line"><a name="l00056"></a><span class="lineno">   56</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php#a8b8191a8bfe6f2502871132501ea7338">Frustum</a>(Angle fieldOfView, <span class="keywordtype">float</span> r, <a class="code" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D&lt;float&gt;</a> <span class="keyword">const</span>&amp; d);</div><div class="line"><a name="l00057"></a><span class="lineno">   57</span>&#160;</div><div class="line"><a name="l00058"></a><span class="lineno">   58</span>&#160;                    <span class="comment">//## Copy-Constructor ##//</span></div><div class="line"><a name="l00063"></a><span class="lineno">   63</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php#a8b8191a8bfe6f2502871132501ea7338">Frustum</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php">Frustum</a> <span class="keyword">const</span>&amp; f) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00064"></a><span class="lineno">   64</span>&#160;</div><div class="line"><a name="l00065"></a><span class="lineno">   65</span>&#160;                    <span class="comment">//## Move-Constructor ##//</span></div><div class="line"><a name="l00070"></a><span class="lineno">   70</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php#a8b8191a8bfe6f2502871132501ea7338">Frustum</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php">Frustum</a> &amp;&amp; f) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00071"></a><span class="lineno">   71</span>&#160;</div><div class="line"><a name="l00072"></a><span class="lineno">   72</span>&#160;                    <span class="comment">//## Deconstructor ##//</span></div><div class="line"><a name="l00076"></a><span class="lineno">   76</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php#a7e32828fa7c6145022ee29d986d75120">~Frustum</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00077"></a><span class="lineno">   77</span>&#160;</div><div class="line"><a name="l00078"></a><span class="lineno">   78</span>&#160;                    <span class="comment">//## Methods ##//</span></div><div class="line"><a name="l00086"></a><span class="lineno">   86</span>&#160;<span class="comment"></span>                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php#a4d5e50e09cd83a78e23be42de12c4ba5">computePlane</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;float&gt;</a> <span class="keyword">const</span>&amp; eye, <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Vector3D&lt;float&gt;</a> <span class="keyword">const</span>&amp; forward, <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Vector3D&lt;float&gt;</a> <span class="keyword">const</span>&amp; left, <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Vector3D&lt;float&gt;</a> <span class="keyword">const</span>&amp; up);</div><div class="line"><a name="l00091"></a><span class="lineno">   91</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php#a74f1ee8b02acd171054e284c0f6e5812">computeProjectionMatrix</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_matrix4x4.php">Matrix4x4&lt;float&gt;</a>&amp; m);</div><div class="line"><a name="l00100"></a><span class="lineno">  100</span>&#160;                        <span class="keywordtype">void</span> <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php#ab85a19a9bb6c7818e1708f3db30bf7ef">resize</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_vector2_d.php">Vector2D&lt;std::size_t&gt;</a> <span class="keyword">const</span>&amp; size, <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Point3D&lt;float&gt;</a> <span class="keyword">const</span>&amp; eye, <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Vector3D&lt;float&gt;</a> <span class="keyword">const</span>&amp; forward, <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Vector3D&lt;float&gt;</a> <span class="keyword">const</span>&amp; left, <a class="code" href="class_n_r_e_1_1_math_1_1_vector3_d.php">Vector3D&lt;float&gt;</a> <span class="keyword">const</span>&amp; up);</div><div class="line"><a name="l00101"></a><span class="lineno">  101</span>&#160;</div><div class="line"><a name="l00102"></a><span class="lineno">  102</span>&#160;                    <span class="comment">//## Assignment Operator ##//</span></div><div class="line"><a name="l00108"></a><span class="lineno">  108</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php">Frustum</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php#af7d9047612f776bbc49811f944cfddc7">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php">Frustum</a> <span class="keyword">const</span>&amp; f) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00114"></a><span class="lineno">  114</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php">Frustum</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php#af7d9047612f776bbc49811f944cfddc7">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php">Frustum</a> &amp;&amp; f) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00115"></a><span class="lineno">  115</span>&#160;</div><div class="line"><a name="l00116"></a><span class="lineno">  116</span>&#160;                    <span class="comment">//## Stream Operator ##//</span></div><div class="line"><a name="l00121"></a><span class="lineno">  121</span>&#160;<span class="comment"></span>                        Utility::String <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php#a0280f625737e147fc610429020b581ab">toString</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00122"></a><span class="lineno">  122</span>&#160;</div><div class="line"><a name="l00123"></a><span class="lineno">  123</span>&#160;                <span class="keyword">private</span>:</div><div class="line"><a name="l00127"></a><span class="lineno">  127</span>&#160;                    <span class="keywordtype">void</span> computeNearAndFar();</div><div class="line"><a name="l00128"></a><span class="lineno">  128</span>&#160;            };</div><div class="line"><a name="l00129"></a><span class="lineno">  129</span>&#160;</div><div class="line"><a name="l00136"></a><span class="lineno">  136</span>&#160;            std::ostream&amp; operator &lt;&lt;(std::ostream&amp; stream, <a class="code" href="class_n_r_e_1_1_math_1_1_frustum.php">Frustum</a> <span class="keyword">const</span>&amp; o);</div><div class="line"><a name="l00137"></a><span class="lineno">  137</span>&#160;        }</div><div class="line"><a name="l00138"></a><span class="lineno">  138</span>&#160;    }</div><div class="ttc" id="class_n_r_e_1_1_math_1_1_vector2_d_php"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_vector2_d.php">NRE::Math::Vector2D&lt; float &gt;</a></div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_frustum_php_a4d5e50e09cd83a78e23be42de12c4ba5"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_frustum.php#a4d5e50e09cd83a78e23be42de12c4ba5">NRE::Math::Frustum::computePlane</a></div><div class="ttdeci">void computePlane(Point3D&lt; float &gt; const &amp;eye, Vector3D&lt; float &gt; const &amp;forward, Vector3D&lt; float &gt; const &amp;left, Vector3D&lt; float &gt; const &amp;up)</div><div class="ttdef"><b>Definition:</b> NRE_Frustum.cpp:21</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_frustum_php_ab85a19a9bb6c7818e1708f3db30bf7ef"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_frustum.php#ab85a19a9bb6c7818e1708f3db30bf7ef">NRE::Math::Frustum::resize</a></div><div class="ttdeci">void resize(Vector2D&lt; std::size_t &gt; const &amp;size, Point3D&lt; float &gt; const &amp;eye, Vector3D&lt; float &gt; const &amp;forward, Vector3D&lt; float &gt; const &amp;left, Vector3D&lt; float &gt; const &amp;up)</div><div class="ttdef"><b>Definition:</b> NRE_Frustum.cpp:56</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_matrix4x4_php"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_matrix4x4.php">NRE::Math::Matrix4x4</a></div><div class="ttdoc">4x4 generic matrix </div><div class="ttdef"><b>Definition:</b> NRE_Matrix3x3.hpp:34</div></div>
<div class="ttc" id="namespace_math_php"><div class="ttname"><a href="namespace_math.php">Math</a></div><div class="ttdoc">Math&amp;#39;s API. </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_frustum_php_a0280f625737e147fc610429020b581ab"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_frustum.php#a0280f625737e147fc610429020b581ab">NRE::Math::Frustum::toString</a></div><div class="ttdeci">Utility::String toString() const </div><div class="ttdef"><b>Definition:</b> NRE_Frustum.cpp:62</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_frustum_php_a8b8191a8bfe6f2502871132501ea7338"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_frustum.php#a8b8191a8bfe6f2502871132501ea7338">NRE::Math::Frustum::Frustum</a></div><div class="ttdeci">Frustum()=delete</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_frustum_php_af7d9047612f776bbc49811f944cfddc7"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_frustum.php#af7d9047612f776bbc49811f944cfddc7">NRE::Math::Frustum::operator=</a></div><div class="ttdeci">Frustum &amp; operator=(Frustum const &amp;f)=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_vector3_d_php"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_vector3_d.php">NRE::Math::Vector3D</a></div><div class="ttdoc">A cartesian 3D vector, 2D homogeneous. </div><div class="ttdef"><b>Definition:</b> NRE_Matrix3x3.hpp:32</div></div>
<div class="ttc" id="namespace_n_r_e_php"><div class="ttname"><a href="namespace_n_r_e.php">NRE</a></div><div class="ttdoc">The NearlyRealEngine&amp;#39;s global namespace. </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve3D.cpp:14</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_frustum_php_a74f1ee8b02acd171054e284c0f6e5812"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_frustum.php#a74f1ee8b02acd171054e284c0f6e5812">NRE::Math::Frustum::computeProjectionMatrix</a></div><div class="ttdeci">void computeProjectionMatrix(Matrix4x4&lt; float &gt; &amp;m)</div><div class="ttdef"><b>Definition:</b> NRE_Frustum.cpp:52</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_frustum_php_a7e32828fa7c6145022ee29d986d75120"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_frustum.php#a7e32828fa7c6145022ee29d986d75120">NRE::Math::Frustum::~Frustum</a></div><div class="ttdeci">~Frustum()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_frustum_php"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_frustum.php">NRE::Math::Frustum</a></div><div class="ttdoc">A view frustum used with camera. </div><div class="ttdef"><b>Definition:</b> NRE_Frustum.hpp:35</div></div>
</div><!-- fragment --></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>
