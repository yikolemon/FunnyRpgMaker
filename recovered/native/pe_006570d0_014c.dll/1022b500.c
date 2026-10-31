/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022b500 */

/* WARNING: Removing unreachable block (ram,0x1022b551) */
/* WARNING: Removing unreachable block (ram,0x1022b553) */

int __thiscall FUN_1022b500(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  bool bVar5;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  
  bVar5 = &stack0xfffffffc < (undefined1 *)0x8;
  pauVar4 = (undefined1 (*) [16])*param_1;
  do {
    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = in_XMM0_Da;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    iVar3 = pcmpestri(*pauVar4,auVar1,1,param_1[2],param_2);
    if ((bVar5) && (iVar3 < param_3)) {
      param_3 = iVar3;
    }
    pauVar4 = pauVar4 + 1;
    bVar5 = pauVar4 < (undefined1 (*) [16])param_1[1];
  } while (pauVar4 != (undefined1 (*) [16])param_1[1]);
  if (param_1[3] != 0) {
    auVar2._4_4_ = in_XMM0_Db;
    auVar2._0_4_ = in_XMM0_Da;
    auVar2._8_4_ = in_XMM0_Dc;
    auVar2._12_4_ = in_XMM0_Dd;
    pcmpestri(*(undefined1 (*) [16])(param_1 + 4),auVar2,1,param_1[3],param_2);
  }
  return param_3;
}

