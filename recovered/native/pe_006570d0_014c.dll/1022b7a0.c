/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022b7a0 */

/* WARNING: Removing unreachable block (ram,0x1022b7f1) */
/* WARNING: Removing unreachable block (ram,0x1022b7f3) */

int __thiscall FUN_1022b7a0(undefined4 *param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  bool bVar6;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  
  bVar6 = false;
  iVar5 = -1;
  pauVar4 = (undefined1 (*) [16])*param_1;
  do {
    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = in_XMM0_Da;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    iVar3 = pcmpestri(*pauVar4,auVar1,0x40,param_1[2],param_2);
    if ((bVar6) && (iVar5 < iVar3)) {
      iVar5 = iVar3;
    }
    pauVar4 = pauVar4 + 1;
    bVar6 = pauVar4 < (undefined1 (*) [16])param_1[1];
  } while (pauVar4 != (undefined1 (*) [16])param_1[1]);
  if (param_1[3] != 0) {
    auVar2._4_4_ = in_XMM0_Db;
    auVar2._0_4_ = in_XMM0_Da;
    auVar2._8_4_ = in_XMM0_Dc;
    auVar2._12_4_ = in_XMM0_Dd;
    pcmpestri(*(undefined1 (*) [16])(param_1 + 4),auVar2,0x40,param_1[3],param_2);
  }
  return iVar5;
}

