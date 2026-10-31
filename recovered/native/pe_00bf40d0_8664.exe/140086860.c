/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140086860(char param_1)

{
  undefined *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  int local_res8 [2];
  
  FUN_140086460(local_res8,0);
  plVar2 = DAT_14013cb68;
  if (DAT_14013cb68 == (longlong *)0x0) {
    plVar2 = FUN_1400866e0(0);
    if (DAT_14013cb70 == '\0') {
      DAT_14013cb70 = '\x01';
      FUN_14008b9c0(FUN_140086960);
    }
    DAT_14013cb68 = plVar2;
    *(undefined4 *)(plVar2 + 4) = 0x3f;
    puVar1 = (undefined *)plVar2[5];
    if (puVar1 != &DAT_14011c6a4) {
      if (puVar1 != (undefined *)0x0) {
        thunk_FUN_1400a1290(puVar1);
      }
      plVar2[5] = 0;
      puVar3 = _malloc_base(2);
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0x43;
      }
      plVar2[5] = (longlong)puVar3;
    }
    (*(code *)PTR__guard_dispatch_icall_1401200f0)(plVar2);
    _DAT_14013cb18 = plVar2;
    DAT_14013cb48 = plVar2;
  }
  if (param_1 != '\0') {
    (*(code *)PTR__guard_dispatch_icall_1401200f0)(plVar2);
  }
  FUN_1400864b0(local_res8);
  return plVar2;
}

