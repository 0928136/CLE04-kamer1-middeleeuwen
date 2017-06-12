bool checkTime(unsigned long lastTime, unsigned long interval){
  if(lastTime <= _currentTime - interval){
    return true;
  }else{
    return false;
  }
}

