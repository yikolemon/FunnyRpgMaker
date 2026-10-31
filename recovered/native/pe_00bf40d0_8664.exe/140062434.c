/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140062434 */

ulonglong FUN_140062434(longlong param_1,uint *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  do {
    uVar2 = uVar2 + 1;
    if (0xff < uVar2) {
      uVar1 = 0;
      uVar2 = 0;
      break;
    }
    uVar1 = FUN_1400623ce(param_1,uVar2);
  } while ((int)uVar1 == 0);
  *param_2 = uVar2;
  return uVar1;
}

