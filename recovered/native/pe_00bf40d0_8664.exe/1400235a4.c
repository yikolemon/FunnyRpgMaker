/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400235a4 */

int FUN_1400235a4(longlong *param_1,undefined8 param_2,undefined1 (*param_3) [16],
                 undefined8 *param_4,uint *param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong *puVar3;
  
  lVar1 = *param_1;
  puVar3 = FUN_140023739(lVar1,param_3,(ulonglong *)".AppleDouble/");
  if (puVar3 == (ulonglong *)0x0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = FUN_140023832(param_1,puVar3,param_5);
    if (iVar2 == 0) {
      *param_4 = puVar3;
      iVar2 = 0;
    }
    else {
      FUN_14001c53d(lVar1,(longlong)puVar3);
    }
  }
  return iVar2;
}

