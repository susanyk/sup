/* Basic reset */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body, html {
    height: 100%;
    display: flex;
    justify-content: center;
    align-items: center;
    background-color: #111;
    font-family: Arial, sans-serif;
}

.container {
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100%;
}

.sup-text {
    font-size: 4rem;
    font-weight: bold;
    color: #fff;
    text-transform: uppercase;
    animation: bounce 2s infinite ease-in-out, colorChange 3s infinite ease-in-out;
}

/* Animation to bounce the text */
@keyframes bounce {
    0%, 100% {
        transform: translateY(0);
    }
    50% {
        transform: translateY(-30px);
    }
}

/* Animation to change text color */
@keyframes colorChange {
    0% {
        color: #ff6347; /* Tomato */
    }
    25% {
        color: #ff1493; /* Deep pink */
    }
    50% {
        color: #32cd32; /* Lime green */
    }
    75% {
        color: #1e90ff; /* Dodger blue */
    }
    100% {
        color: #ff6347; /* Tomato */
    }
}
