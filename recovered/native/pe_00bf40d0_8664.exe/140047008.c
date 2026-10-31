/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140047008 */

int FUN_140047008(longlong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = FUN_140021063(param_1,param_2);
  iVar5 = 0;
  if (iVar2 == 0) {
    puVar3 = (uint *)param_1[7];
    iVar5 = 0;
    if (3 < param_2) {
      iVar5 = 0;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18);
        param_2 = param_2 - 4;
      } while (3 < param_2);
    }
    if (param_2 != 0) {
      bVar4 = 0x18;
      lVar6 = 0;
      do {
        iVar5 = iVar5 + ((uint)*(byte *)((longlong)puVar3 + lVar6) << (bVar4 & 0x1f));
        bVar4 = bVar4 - 8;
        lVar6 = lVar6 + 1;
      } while (param_2 != (uint)lVar6);
    }
    FUN_140021187(param_1);
  }
  return iVar5;
}

