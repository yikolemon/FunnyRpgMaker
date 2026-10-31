/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007a370 */

longlong FUN_14007a370(longlong param_1,uint *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar5 = *param_2;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  iVar1 = FUN_14007a2df(param_1,uVar5 + 1,param_3);
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (uVar5 == 0) {
      uVar3 = 0;
    }
    else {
      puVar6 = param_2 + 1;
      uVar3 = (ulonglong)uVar5;
      uVar4 = 0;
      do {
        *(uint *)(lVar2 + uVar4 * 4) =
             (uint)*(byte *)((longlong)puVar6 + 2) |
             (uint)*(byte *)((longlong)puVar6 + 1) << 8 | (uint)(byte)*puVar6 << 0x10;
        puVar6 = (uint *)((longlong)puVar6 + 5);
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
    *(undefined4 *)(lVar2 + uVar3 * 4) = 0;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

