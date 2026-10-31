/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400debe4 */

void FUN_1400debe4(longlong param_1,undefined8 param_2,float param_3,uint param_4,int param_5)

{
  int iVar1;
  
  if (DAT_1401c86a0 <= param_3 && 0xffffff < param_4) {
    if (param_5 < 1) {
      FUN_1400dc0b8(param_1,param_2,param_3,0,0x30,0);
      iVar1 = *(int *)(param_1 + 0x50) + -1;
      *(int *)(param_1 + 0x50) = iVar1;
    }
    else {
      iVar1 = FUN_1400a4c0f(param_5,3,0x200);
      FUN_1400dc6f0(param_1,param_2,param_3,0,
                    ((DAT_1401c86a4 + (float)iVar1) * DAT_1402113a4) / (float)iVar1,iVar1 + -1);
      iVar1 = *(int *)(param_1 + 0x50);
    }
    FUN_1400dbd54(param_1,*(undefined8 *)(param_1 + 0x58),iVar1,param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

