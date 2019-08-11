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
        <title>NRE-Math: /mnt/c/Users/abell/Documents/GitHub/NRE-Math/src/Math/Segment/3D/NRE_Segment3D.hpp Source File</title>
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
        <nav class="navbar navbar-default" role="navigation">
            <div class="container">
                <header class="page-header">
                    <a href="../../../index.php">
                        <img src="../../img/Logo.png" class="logo img-responsive"/>
                    </a>
                </header>
                <?php addNavigationBarInl(false); ?>
                <div class="navbar-header">
                    <a class="navbar-brand">NRE-Math 1.0.0</a>
                </div>
            </div>
        </nav>
        <div id="top"><!-- do not remove this div, it is closed by doxygen! -->
            <div class="content" id="content">
                <div class="container">
                    <div class="row">
                        <div class="col-sm-12 panel " style="padding-bottom: 15px;">
                            <div style="margin-bottom: 15px;">
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
<li class="navelem"><a class="el" href="dir_68267d1309a1af8e8297ef4c3efbcdba.php">src</a></li><li class="navelem"><a class="el" href="dir_3813464283bee2267f39dcf080a84d74.php">Math</a></li><li class="navelem"><a class="el" href="dir_3f75207e03159bed1664f9452b71f96b.php">Segment</a></li><li class="navelem"><a class="el" href="dir_9c35d3427f50056925f8a9e5449531e6.php">3D</a></li>  </ul>
</div>
</div><!-- top -->
<div class="header">
  <div class="headertitle">
<div class="title">NRE_Segment3D.hpp</div>  </div>
</div><!--header-->
<div class="contents">
<a href="_n_r_e___segment3_d_8hpp.php">Go to the documentation of this file.</a><div class="fragment"><div class="line"><a name="l00001"></a><span class="lineno">    1</span>&#160;</div><div class="line"><a name="l00010"></a><span class="lineno">   10</span>&#160;<span class="preprocessor">     #pragma once</span></div><div class="line"><a name="l00011"></a><span class="lineno">   11</span>&#160;</div><div class="line"><a name="l00012"></a><span class="lineno">   12</span>&#160;<span class="preprocessor">     #include &quot;../../Vector/3D/NRE_Vector3D.hpp&quot;</span></div><div class="line"><a name="l00013"></a><span class="lineno">   13</span>&#160;</div><div class="line"><a name="l00018"></a><span class="lineno">   18</span>&#160;     <span class="keyword">namespace </span><a class="code" href="namespace_n_r_e.php">NRE</a> {</div><div class="line"><a name="l00023"></a><span class="lineno">   23</span>&#160;         <span class="keyword">namespace </span><a class="code" href="namespace_math.php">Math</a> {</div><div class="line"><a name="l00024"></a><span class="lineno">   24</span>&#160;</div><div class="line"><a name="l00029"></a><span class="lineno">   29</span>&#160;            <span class="keyword">template</span> &lt;<span class="keyword">class</span> T&gt;</div><div class="line"><a name="l00030"></a><span class="lineno">   30</span>&#160;            <span class="keyword">class </span>Segment3D {</div><div class="line"><a name="l00031"></a><span class="lineno">   31</span>&#160;                <span class="keyword">private</span>:    <span class="comment">//Fields</span></div><div class="line"><a name="l00032"></a><span class="lineno">   32</span>&#160;                    Point3D&lt;T&gt; start;   </div><div class="line"><a name="l00033"></a><span class="lineno">   33</span>&#160;                    Point3D&lt;T&gt; end;     </div><div class="line"><a name="l00035"></a><span class="lineno">   35</span>&#160;                <span class="keyword">public</span>:    <span class="comment">// Methods</span></div><div class="line"><a name="l00036"></a><span class="lineno">   36</span>&#160;                    <span class="comment">//## Constructor ##//</span></div><div class="line"><a name="l00040"></a><span class="lineno">   40</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a>();</div><div class="line"><a name="l00046"></a><span class="lineno">   46</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a>(Point3D&lt;T&gt; <span class="keyword">const</span>&amp; s, Point3D&lt;T&gt; <span class="keyword">const</span>&amp; e);</div><div class="line"><a name="l00052"></a><span class="lineno">   52</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a>(Point2D&lt;T&gt; <span class="keyword">const</span>&amp; s, Point2D&lt;T&gt; <span class="keyword">const</span>&amp; e);</div><div class="line"><a name="l00060"></a><span class="lineno">   60</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a>(T sX, T sY, T eX, T eY);</div><div class="line"><a name="l00061"></a><span class="lineno">   61</span>&#160;</div><div class="line"><a name="l00062"></a><span class="lineno">   62</span>&#160;                    <span class="comment">//## Copy-Constructor ##//</span></div><div class="line"><a name="l00067"></a><span class="lineno">   67</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a> <span class="keyword">const</span>&amp; s) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00068"></a><span class="lineno">   68</span>&#160;</div><div class="line"><a name="l00069"></a><span class="lineno">   69</span>&#160;                    <span class="comment">//## Move-Constructor ##//</span></div><div class="line"><a name="l00074"></a><span class="lineno">   74</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a> &amp;&amp; s) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00075"></a><span class="lineno">   75</span>&#160;</div><div class="line"><a name="l00076"></a><span class="lineno">   76</span>&#160;                    <span class="comment">//## Deconstructor ##//</span></div><div class="line"><a name="l00080"></a><span class="lineno">   80</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#aab25be12d368d92927030a6c0c63fcc8">~Segment3D</a>() = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00081"></a><span class="lineno">   81</span>&#160;</div><div class="line"><a name="l00082"></a><span class="lineno">   82</span>&#160;                    <span class="comment">//## Getter ##//</span></div><div class="line"><a name="l00087"></a><span class="lineno">   87</span>&#160;<span class="comment"></span>                        Point3D&lt;T&gt; <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#ad83cfc126456eeb8593e4a98d914039b">getStart</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00092"></a><span class="lineno">   92</span>&#160;                        Point3D&lt;T&gt; <span class="keyword">const</span>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#ae89b9f841d5ca4e8500c0e7f9016de44">getEnd</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00097"></a><span class="lineno">   97</span>&#160;                        Vector3D&lt;T&gt; <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a60a87a35cebed3faf2481b17573797e2">getVector</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00098"></a><span class="lineno">   98</span>&#160;</div><div class="line"><a name="l00099"></a><span class="lineno">   99</span>&#160;                    <span class="comment">//## Assignment Operator ##//</span></div><div class="line"><a name="l00105"></a><span class="lineno">  105</span>&#160;<span class="comment"></span>                        <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a267b1ac46799e64fe7ec326ff994457c">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a> <span class="keyword">const</span>&amp; s) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00111"></a><span class="lineno">  111</span>&#160;                        <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a>&amp; <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a267b1ac46799e64fe7ec326ff994457c">operator =</a>(<a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">Segment3D</a> &amp;&amp; s) = <span class="keywordflow">default</span>;</div><div class="line"><a name="l00112"></a><span class="lineno">  112</span>&#160;</div><div class="line"><a name="l00113"></a><span class="lineno">  113</span>&#160;                    <span class="comment">//## Comparison Operator ##//</span></div><div class="line"><a name="l00119"></a><span class="lineno">  119</span>&#160;<span class="comment"></span>                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00120"></a><span class="lineno">  120</span>&#160;                        <span class="keywordtype">bool</span> <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#abbdb718a0712a5380802098fc5dd5adf">operator ==</a>(Segment3D&lt;K&gt; <span class="keyword">const</span>&amp; s) <span class="keyword">const</span>;</div><div class="line"><a name="l00126"></a><span class="lineno">  126</span>&#160;                        <span class="keyword">template</span> &lt;<span class="keyword">class</span> K&gt;</div><div class="line"><a name="l00127"></a><span class="lineno">  127</span>&#160;                        <span class="keywordtype">bool</span> <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#a3ad55959306d5f542bf85711e38f8fb6">operator !=</a>(Segment3D&lt;K&gt; <span class="keyword">const</span>&amp; s) <span class="keyword">const</span>;</div><div class="line"><a name="l00128"></a><span class="lineno">  128</span>&#160;</div><div class="line"><a name="l00129"></a><span class="lineno">  129</span>&#160;                    <span class="comment">//## Stream Operator ##//</span></div><div class="line"><a name="l00134"></a><span class="lineno">  134</span>&#160;<span class="comment"></span>                        Utility::String <a class="code" href="class_n_r_e_1_1_math_1_1_segment3_d.php#aed3c1bad9d8330defc1e84b5cb31930c">toString</a>() <span class="keyword">const</span>;</div><div class="line"><a name="l00135"></a><span class="lineno">  135</span>&#160;            };</div><div class="line"><a name="l00136"></a><span class="lineno">  136</span>&#160;</div><div class="line"><a name="l00143"></a><span class="lineno">  143</span>&#160;            <span class="keyword">template</span> &lt;<span class="keyword">class</span> T&gt;</div><div class="line"><a name="l00144"></a><span class="lineno">  144</span>&#160;            std::ostream&amp; operator &lt;&lt;(std::ostream&amp; stream, Segment3D&lt;T&gt; <span class="keyword">const</span>&amp; o);</div><div class="line"><a name="l00145"></a><span class="lineno">  145</span>&#160;        }</div><div class="line"><a name="l00146"></a><span class="lineno">  146</span>&#160;    }</div><div class="line"><a name="l00147"></a><span class="lineno">  147</span>&#160;</div><div class="line"><a name="l00148"></a><span class="lineno">  148</span>&#160;<span class="preprocessor">    #include &quot;NRE_Segment3D.tpp&quot;</span></div><div class="ttc" id="class_n_r_e_1_1_math_1_1_segment3_d_php_ad83cfc126456eeb8593e4a98d914039b"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_segment3_d.php#ad83cfc126456eeb8593e4a98d914039b">NRE::Math::Segment3D::getStart</a></div><div class="ttdeci">Point3D&lt; T &gt; const &amp; getStart() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_segment3_d_php_a21c47db2fafaf77574a2bf7647fd0c45"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_segment3_d.php#a21c47db2fafaf77574a2bf7647fd0c45">NRE::Math::Segment3D::Segment3D</a></div><div class="ttdeci">Segment3D()</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_segment3_d_php_a60a87a35cebed3faf2481b17573797e2"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_segment3_d.php#a60a87a35cebed3faf2481b17573797e2">NRE::Math::Segment3D::getVector</a></div><div class="ttdeci">Vector3D&lt; T &gt; getVector() const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_segment3_d_php_aed3c1bad9d8330defc1e84b5cb31930c"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_segment3_d.php#aed3c1bad9d8330defc1e84b5cb31930c">NRE::Math::Segment3D::toString</a></div><div class="ttdeci">Utility::String toString() const </div></div>
<div class="ttc" id="namespace_math_php"><div class="ttname"><a href="namespace_math.php">Math</a></div><div class="ttdoc">Math&amp;#39;s API. </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_segment3_d_php_a3ad55959306d5f542bf85711e38f8fb6"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_segment3_d.php#a3ad55959306d5f542bf85711e38f8fb6">NRE::Math::Segment3D::operator!=</a></div><div class="ttdeci">bool operator!=(Segment3D&lt; K &gt; const &amp;s) const </div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_segment3_d_php_a267b1ac46799e64fe7ec326ff994457c"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_segment3_d.php#a267b1ac46799e64fe7ec326ff994457c">NRE::Math::Segment3D::operator=</a></div><div class="ttdeci">Segment3D &amp; operator=(Segment3D const &amp;s)=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_segment3_d_php_ae89b9f841d5ca4e8500c0e7f9016de44"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_segment3_d.php#ae89b9f841d5ca4e8500c0e7f9016de44">NRE::Math::Segment3D::getEnd</a></div><div class="ttdeci">Point3D&lt; T &gt; const &amp; getEnd() const </div></div>
<div class="ttc" id="namespace_n_r_e_php"><div class="ttname"><a href="namespace_n_r_e.php">NRE</a></div><div class="ttdoc">The NearlyRealEngine&amp;#39;s global namespace. </div><div class="ttdef"><b>Definition:</b> NRE_BezierCurve3D.cpp:14</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_segment3_d_php_aab25be12d368d92927030a6c0c63fcc8"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_segment3_d.php#aab25be12d368d92927030a6c0c63fcc8">NRE::Math::Segment3D::~Segment3D</a></div><div class="ttdeci">~Segment3D()=default</div></div>
<div class="ttc" id="class_n_r_e_1_1_math_1_1_segment3_d_php_abbdb718a0712a5380802098fc5dd5adf"><div class="ttname"><a href="class_n_r_e_1_1_math_1_1_segment3_d.php#abbdb718a0712a5380802098fc5dd5adf">NRE::Math::Segment3D::operator==</a></div><div class="ttdeci">bool operator==(Segment3D&lt; K &gt; const &amp;s) const </div></div>
</div><!-- fragment --></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</div>
<hr class="footer"/><address class="footer"><small>
Generated on Sun Aug 11 2019 18:37:54 for NRE-Math by &#160;<a href="http://www.doxygen.org/index.html">
<img class="footer" src="doxygen.png" alt="doxygen"/>
</a> 1.8.11
</small></address>
</body>
</html>
