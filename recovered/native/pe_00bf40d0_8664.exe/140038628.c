/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140038628 */

void FUN_140038628(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = *(longlong *)(*param_1 + 0x98);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)((longlong)param_1 + lVar4 + 0x48);
      if (lVar3 != 0) {
        if (*(code **)((&PTR_DAT_1400f0d20)
                       [*(int *)(*(longlong *)((longlong)&PTR_DAT_1400f0f40 + lVar4) + 4)] + 0x20)
            != (code *)0x0) {
          (**(code **)((&PTR_DAT_1400f0d20)
                       [*(int *)(*(longlong *)((longlong)&PTR_DAT_1400f0f40 + lVar4) + 4)] + 0x20))
                    (lVar3);
          lVar3 = *(longlong *)((longlong)param_1 + lVar4 + 0x48);
        }
        FUN_14001c53d(lVar1,lVar3);
        *(undefined8 *)((longlong)param_1 + lVar4 + 0x48) = 0;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x2b8);
    uVar2 = FUN_14002fd6a((longlong)param_1);
    if ((char)uVar2 != '\0') {
      (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x80))(param_1[3]);
      (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x28))(param_1[4]);
      FUN_14001c53d(lVar1,param_1[5]);
      param_1[5] = 0;
      FUN_14001c53d(lVar1,param_1[7]);
      param_1[7] = 0;
    }
    FUN_14001c53d(lVar1,(longlong)param_1);
    return;
  }
  return;
}

