document.addEventListener("DOMContentLoaded", function () {
  const shuffleButton = document.getElementById("shuffleButton");

  shuffleButton.addEventListener("click", function () {
    const allRooms = Array.from(document.querySelectorAll(".room"));

    for (let i = allRooms.length - 1; i > 0; i--) {
      const j = Math.floor(Math.random() * (i + 1));
      [allRooms[i].textContent, allRooms[j].textContent] = [allRooms[j].textContent, allRooms[i].textContent];
    }
  });
});
