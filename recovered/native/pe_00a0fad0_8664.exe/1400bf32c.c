/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bf32c */

void FUN_1400bf32c(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar6 = param_3;
  do {
    uVar4 = uVar6;
    if (uVar4 <= param_2) break;
    uVar6 = uVar4 - 0x28;
  } while (*(longlong *)(uVar4 + 0x20) == *(longlong *)(uVar4 - 8));
  do {
    uVar3 = param_3 + 0x28;
    uVar6 = uVar4;
    uVar7 = uVar3;
    if (param_4 <= uVar3) break;
    plVar1 = (longlong *)(param_3 + 0x48);
    param_3 = uVar3;
  } while (*(longlong *)(uVar4 + 0x20) == *plVar1);
LAB_1400bf380:
  do {
    uVar5 = uVar4;
    if (uVar7 < param_4) {
      if (*(ulonglong *)(uVar7 + 0x20) <= *(ulonglong *)(uVar6 + 0x20)) {
        if (*(ulonglong *)(uVar6 + 0x20) != *(ulonglong *)(uVar7 + 0x20))
        goto joined_r0x0001400bf3b1;
        if (uVar7 != uVar3) {
          FUN_1400bf50a(uVar3,uVar7);
        }
        uVar3 = uVar3 + 0x28;
      }
      uVar7 = uVar7 + 0x28;
      goto LAB_1400bf380;
    }
joined_r0x0001400bf3b1:
    while (uVar4 = uVar5, param_2 < uVar4) {
      uVar5 = uVar4 - 0x28;
      if (*(ulonglong *)(uVar6 + 0x20) <= *(ulonglong *)(uVar4 - 8)) {
        if (*(ulonglong *)(uVar6 + 0x20) < *(ulonglong *)(uVar4 - 8)) break;
        uVar2 = uVar6 - 0x28;
        bVar8 = uVar4 != uVar6;
        uVar6 = uVar2;
        if (bVar8) {
          FUN_1400bf50a(uVar2,uVar5);
        }
      }
    }
    if (uVar7 == param_4 && uVar4 == param_2) {
      *param_1 = uVar6;
      param_1[1] = uVar3;
      return;
    }
    if (uVar4 == param_2) {
      if (uVar3 != uVar7) {
        FUN_1400bf50a(uVar6,uVar3);
      }
      uVar3 = uVar3 + 0x28;
      FUN_1400bf50a(uVar6,uVar7);
      uVar6 = uVar6 + 0x28;
      uVar7 = uVar7 + 0x28;
    }
    else {
      uVar5 = uVar4 - 0x28;
      if (uVar7 == param_4) {
        uVar2 = uVar6 - 0x28;
        if (uVar4 != uVar6) {
          FUN_1400bf50a(uVar5,uVar2);
        }
        uVar3 = uVar3 - 0x28;
        FUN_1400bf50a(uVar2,uVar3);
        uVar4 = uVar5;
        uVar6 = uVar2;
      }
      else {
        FUN_1400bf50a(uVar7,uVar5);
        uVar4 = uVar5;
        uVar7 = uVar7 + 0x28;
      }
    }
  } while( true );
}

