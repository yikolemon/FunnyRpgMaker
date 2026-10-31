/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006283d */

undefined8 FUN_14006283d(longlong param_1,int param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  size_t local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  iVar3 = param_2 + 1;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 1) {
      goto LAB_140062893;
    }
    pbVar1 = FUN_14006258e(param_1,(longlong *)0x0);
  } while (pbVar1 != (byte *)0x0);
LAB_14006286e:
  uVar2 = 0xa0;
LAB_140062873:
  if (DAT_14012ea80 != (local_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_18 ^ (ulonglong)auStack_48);
  }
  return uVar2;
  while( true ) {
    iVar3 = FUN_1400625e6((char *)pbVar1,local_20);
    uVar2 = 0;
    if ((iVar3 == 0x14) || (iVar3 == 0x11)) break;
LAB_140062893:
    pbVar1 = FUN_14006258e(param_1,(longlong *)&local_20);
    if (pbVar1 == (byte *)0x0) goto LAB_14006286e;
  }
  goto LAB_140062873;
}

