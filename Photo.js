let current = 1;

        function changePhoto() {
            let img = document.getElementById("myImage");

            if (current === 1) {
                img.src = "TWO.png";
                current = 2;
            } else {
                img.src = "ONE.png";
                current = 1;
            }
        }