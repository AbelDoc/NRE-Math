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
        <title>NRE-Math: NRE-Math</title>
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
      <li class="current"><a href="index.php"><span>Main&#160;Page</span></a></li>
      <li><a href="namespaces.php"><span>Namespaces</span></a></li>
      <li><a href="annotated.php"><span>Classes</span></a></li>
      <li><a href="files.php"><span>Files</span></a></li>
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
</div><!-- top -->
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

<div class="header">
  <div class="headertitle">
<div class="title">NRE-Math </div>  </div>
</div><!--header-->
<div class="contents">
<div class="textblock"><p>NRE-Math is the mathematical module used in NearlyRealEngine It regroup simple mathematical class and a generic implementation for international unit system.</p>
<h2>Features</h2>
<ul>
<li>Header-only</li>
<li>Vector 2D, 3D, 4D : Vector regroup all methods to describe a cartesian 2D, 3D, 4D vector. 3D &amp; 4D Vector represent 2D &amp; 3D homogeneous Vector. All bases operations are supported : +, -, *, /, dot product (|), cross product (^), ==, !=, &gt;, &lt;, &gt;=, &lt;= Normalisation, distance computation, individual elements access (getter or [ ]).</li>
<li>Point 2D, 3D, 4D : Simple aliases on Vector</li>
<li>Matrix 3x3, 4x4 : Allow simple use to create transformation matrix. All bases operations are supported : +, -, *, /, ==, != Possible transformations :<ul>
<li>Translation</li>
<li>Rotation</li>
<li>Sheer</li>
<li>Scale</li>
<li>Squeeze</li>
<li>Perspective</li>
<li>Orthogonal Transformations can be apply by multiplying the matrix with a supported object :</li>
<li>Vector</li>
<li>Point</li>
<li>Plane</li>
<li>Segment</li>
<li>BezierCurve</li>
</ul>
</li>
<li>Segment 3D, 4D : Represent 2D &amp; 3D homogeneous Segments</li>
<li>BezierCurve 3D, 4D : Represent 2D &amp; 3D homogeneous Bezier Curves</li>
<li>Frustum : Represent a view frustum, used in collaboration with camera to set up a perspective camera</li>
<li>Plane : Represent a 3D plane, it's use 3D homogeneous coordinates to allow simple transformations with a matrix</li>
<li>Quaternion : Represent a simple quaternion, can be converted to a 4x4 matrix in order to represent a rotation matrix.</li>
</ul>
<h2>Architecture</h2>
<div class="image">
<img src="https://github.com/AbelDoc/NRE-Math/blob/master/uml/Math/NRE_Math.png"  alt="UML"/>
</div>
 </div></div><!-- contents -->
<!-- HTML footer for doxygen 1.8.8-->
<!-- start footer part -->
</div>
</div>
</div>
</div>
</body>
</html>