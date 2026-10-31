/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013a6e0 */

void FUN_14013a6e0(longlong *param_1)

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
        if (*(code **)((&PTR_DAT_140e97f60)
                       [*(int *)(*(longlong *)((longlong)&PTR_DAT_140e98180 + lVar4) + 4)] + 0x20)
            != (code *)0x0) {
          (**(code **)((&PTR_DAT_140e97f60)
                       [*(int *)(*(longlong *)((longlong)&PTR_DAT_140e98180 + lVar4) + 4)] + 0x20))
                    (lVar3);
          lVar3 = *(longlong *)((longlong)param_1 + lVar4 + 0x48);
        }
        FUN_140128b39(uVar1,lVar3);
        *(undefined8 *)((longlong)param_1 + lVar4 + 0x48) = 0;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x2b8);
    cVar2 = FUN_140131e22(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x80))(param_1[3]);
      (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x28))(param_1[4]);
      FUN_140128b39(uVar1,param_1[5]);
      param_1[5] = 0;
      FUN_140128b39(uVar1,param_1[7]);
      param_1[7] = 0;
    }
    FUN_140128b39(uVar1,param_1);
    return;
  }
  return;
}

