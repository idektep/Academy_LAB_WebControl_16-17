//------------------------------------------------------------------AGV Control Function -----------------------------------------------------------------------------//
void processAGVMovement(String inputValue) {
  switch (inputValue.toInt()) {
    case UP:
      forward(10);
      break;
    case DOWN:
      backward(10);
      break;
    case LEFT:
      //Add Direction Function
      break;
    case RIGHT:
      //Add Direction Function
      break;
    case UP_LEFT:
      //Add Direction Function
      break;
    case UP_RIGHT:
      //Add Direction Function
      break;
    case DOWN_LEFT:
      //Add Direction Function
      break;
    case DOWN_RIGHT:
      //Add Direction Function
      break;
    case TURN_LEFT:
      //Add Direction Function
      break;
    case TURN_RIGHT:
      //Add Direction Function
      break;
    case STOP:
      //Add Direction Function
      break;
    default:
      //Add Direction Function
      break;
  }
}

