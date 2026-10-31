/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102354d0 */

int * FUN_102354d0(int *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined **ppuVar5;
  int *piVar6;
  int iVar7;
  undefined *local_1c;
  undefined **local_18;
  undefined4 local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028922e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  piVar6 = (int *)FUN_102588b0(DAT_10388d00 ^ (uint)&stack0xfffffffc);
  puVar3 = (undefined4 *)*piVar6;
  if (((puVar3 != (undefined4 *)0x0) && (piVar6 = (int *)*puVar3, piVar6 != (int *)0xe0434f4d)) &&
     (piVar6 != (int *)0xe0434352)) {
    if (((piVar6 == (int *)0xe06d7363) && (puVar3[4] == 3)) &&
       (((iVar7 = puVar3[5], iVar7 == 0x19930520 || ((iVar7 == 0x19930521 || (iVar7 == 0x19930522)))
         ) || (iVar7 == 0x1994000)))) {
      piVar6 = (int *)FUN_10235c90(param_1,puVar3);
      ExceptionList = local_10;
      return piVar6;
    }
    iVar7 = FUN_1026faa0(0x60);
    if (iVar7 == 0) {
      local_14 = 1;
      LOCK();
      DAT_1038a7dc = DAT_1038a7dc + 1;
      UNLOCK();
      local_1c = &DAT_1038a7e4;
      local_18 = &PTR_vftable_1038a7d8;
      local_8 = iVar7;
      FUN_102358c0(&local_1c);
      ppuVar5 = local_18;
      piVar6 = (int *)0x0;
      local_14 = 0;
      local_8 = 0xffffffff;
      if (local_18 != (undefined **)0x0) {
        LOCK();
        ppuVar1 = local_18 + 1;
        puVar2 = *ppuVar1;
        piVar6 = (int *)*ppuVar1;
        *ppuVar1 = puVar2 + -1;
        UNLOCK();
        if (puVar2 + -1 == (undefined *)0x0) {
          pcVar4 = *(code **)*local_18;
          (*(code *)PTR_guard_check_icall_1035d810)();
          piVar6 = (int *)(*pcVar4)();
          LOCK();
          ppuVar1 = ppuVar5 + 2;
          puVar2 = *ppuVar1;
          *ppuVar1 = *ppuVar1 + -1;
          UNLOCK();
          if (puVar2 == (undefined *)0x1) {
            pcVar4 = *(code **)(*ppuVar5 + 4);
            (*(code *)PTR_guard_check_icall_1035d810)();
            piVar6 = (int *)(*pcVar4)();
            ExceptionList = local_10;
            return piVar6;
          }
        }
      }
    }
    else {
      piVar6 = (int *)FUN_10235a80(puVar3);
      *param_1 = (int)(piVar6 + 3);
      param_1[1] = (int)piVar6;
    }
  }
  ExceptionList = local_10;
  return piVar6;
}

