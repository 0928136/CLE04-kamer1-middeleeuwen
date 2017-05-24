void checkTime(unsigned long timeOutTime){
  if(timeOutTime >= _currentTime){
    return true;
  }else{
    return false;
  }
}

