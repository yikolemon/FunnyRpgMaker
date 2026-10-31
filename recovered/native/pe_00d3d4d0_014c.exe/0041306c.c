/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041306c */

undefined4 __thiscall FUN_0041306c(void *this,byte param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)this;
  if (cVar1 == '\x02') {
    if (param_1 != 0) {
      if (param_1 < 3) {
        return 1;
      }
      goto LAB_004130ac;
    }
    param_1 = 1;
  }
  else {
    if (cVar1 == '\x01') {
      if (param_1 < 2) {
        return 0;
      }
      uVar2 = 1;
      if (param_1 == 2) goto LAB_004130b0;
    }
    else if (cVar1 == '\0') {
      uVar2 = 0;
      if (param_1 != 0) {
        return 0;
      }
      param_1 = 1;
      goto LAB_004130b0;
    }
LAB_004130ac:
    param_1 = 0;
  }
  uVar2 = 0;
LAB_004130b0:
  *(byte *)this = param_1;
  return uVar2;
}

