window.addEventListener("scroll", function() {
  const clone = document.getElementById("nav-clone");
  if (window.scrollY > 80) {
    clone.classList.add("active");
  } else {
    clone.classList.remove("active");
  }
});
