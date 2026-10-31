/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140481ae4 */

int FUN_140481ae4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = ((param_3 - (param_2 + 6) % 7) + 7) / 7;
  bVar2 = __crt_time_is_leap_year<>(param_1);
  iVar5 = param_3 - (uint)bVar2;
  iVar4 = ((param_2 - param_3) + 0x173) % 7;
  iVar3 = (int)(bVar2 + 0x16d + iVar4) % 7;
  if ((((iVar5 < 0x16c) || (iVar3 != 2)) && ((iVar5 < 0x16b || (iVar3 != 3)))) &&
     ((iVar5 < 0x16a || (iVar3 != 4)))) {
    iVar3 = iVar1 + 1;
    if ((1 < iVar4 - 2U) && (iVar4 != 4)) {
      iVar3 = iVar1;
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}

