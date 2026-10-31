/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eaff4 */

void FUN_1801eaff4(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(undefined8 *)(*param_1 + 0x98);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)((longlong)param_1 + lVar4 + 0x48);
      if (lVar3 != 0) {
        if (*(code **)((&PTR_DAT_180333c00)
                       [*(int *)(*(longlong *)((longlong)&PTR_DAT_180333e20 + lVar4) + 4)] + 0x20)
            != (code *)0x0) {
          (**(code **)((&PTR_DAT_180333c00)
                       [*(int *)(*(longlong *)((longlong)&PTR_DAT_180333e20 + lVar4) + 4)] + 0x20))
                    (lVar3);
          lVar3 = *(longlong *)((longlong)param_1 + lVar4 + 0x48);
        }
        FUN_1801c9b65(uVar1,lVar3);
        *(undefined8 *)((longlong)param_1 + lVar4 + 0x48) = 0;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x2b8);
    cVar2 = FUN_1801e2736(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x80))(param_1[3]);
      (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x28))(param_1[4]);
      FUN_1801c9b65(uVar1,param_1[5]);
      param_1[5] = 0;
      FUN_1801c9b65(uVar1,param_1[7]);
      param_1[7] = 0;
    }
    FUN_1801c9b65(uVar1,param_1);
    return;
  }
  return;
}

