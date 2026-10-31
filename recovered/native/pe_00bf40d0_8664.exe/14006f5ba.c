/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006f5ba */

longlong FUN_14006f5ba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x28);
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar2 = FUN_14007a2df(param_1,*(uint *)(param_1 + 0x28) + 1,param_2);
  if (iVar2 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (uVar6 == 0) {
      uVar6 = 0;
    }
    else {
      pbVar5 = (byte *)(lVar1 + 10);
      uVar4 = 0;
      do {
        *(uint *)(lVar3 + uVar4 * 4) =
             (uint)pbVar5[2] | (uint)pbVar5[1] << 8 | (uint)*pbVar5 << 0x10;
        pbVar5 = pbVar5 + 0xb;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    *(undefined4 *)(lVar3 + uVar6 * 4) = 0;
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}

