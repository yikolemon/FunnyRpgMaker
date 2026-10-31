/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007fbb8 */

void __thiscall FUN_1007fbb8(int *param_1,byte param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_60 [8];
  int *local_58;
  int *local_54;
  int *local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_60;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c3010;
  local_20 = ExceptionList;
  piVar6 = (int *)*param_1;
  if ((param_2 != 1 || piVar6 != (int *)0x0) &&
     (param_2 != 8 && (param_2 & 0xfe) != 2 || piVar6 != (int *)0x0)) {
    ExceptionList = &local_20;
    local_50 = param_1;
    puVar2 = &stack0xfffffffc;
    puVar3 = auStack_60;
    if ((byte)(param_2 - 1) < 2) {
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_18 = 1;
      if (param_2 == 2) {
        local_28 = &stack0xfffffffc;
        local_24 = auStack_60;
        FUN_1007ff00(piVar6[1] - *piVar6 >> 4);
        piVar6 = *(int **)*local_50;
        local_54 = (int *)((int *)*local_50)[1];
        if (piVar6 != local_54) {
          do {
            local_58 = piVar6;
            FUN_1008012c(piVar6);
            piVar6 = local_58 + 4;
          } while (piVar6 != local_54);
        }
      }
      else {
        FUN_1007ff00((piVar6[1] - *piVar6 >> 3) * -0x33333333);
        local_54 = (int *)((undefined4 *)*local_50)[1];
        piVar6 = *(int **)*local_50;
        while (piVar6 != local_54) {
          local_58 = piVar6;
          FUN_1008012c(piVar6 + 6);
          piVar6 = local_58 + 10;
        }
      }
      if (local_4c != local_48) {
        do {
          local_40 = *(uint *)(local_48 + -0x10);
          uStack_3c = *(undefined4 *)(local_48 + -0xc);
          piStack_38 = *(int **)(local_48 + -8);
          uStack_34 = *(undefined4 *)(local_48 + -4);
          *(undefined1 *)(local_48 + -0x10) = 0;
          *(undefined4 *)(local_48 + -4) = 0;
          *(undefined4 *)(local_48 + -8) = 0;
          local_18 = 2;
          FUN_1007f222();
          local_48 = local_48 + -0x10;
          if ((local_40 & 0xff) == 1) {
            local_54 = (int *)piStack_38[1];
            for (local_58 = (int *)*piStack_38; local_58 != local_54; local_58 = local_58 + 10) {
              FUN_1008012c(local_58 + 6);
            }
            iVar7 = *piStack_38;
            local_58 = piStack_38;
            iVar1 = piStack_38[1];
            if (iVar7 != iVar1) {
              do {
                FUN_100803d3(iVar7);
                iVar7 = iVar7 + 0x28;
              } while (iVar7 != iVar1);
              local_58[1] = *local_58;
            }
          }
          else if ((local_40 & 0xff) == 2) {
            piVar6 = (int *)*piStack_38;
            piVar4 = (int *)piStack_38[1];
            local_54 = piVar4;
            if (piVar6 != piVar4) {
              do {
                local_58 = piVar6;
                FUN_1008012c(piVar6);
                piVar6 = local_58 + 4;
              } while (piVar6 != local_54);
              piVar6 = (int *)*piStack_38;
              piVar4 = (int *)piStack_38[1];
            }
            local_58 = piStack_38;
            if (piVar6 != piVar4) {
              do {
                FUN_1007f222();
                piVar6 = piVar6 + 4;
              } while (piVar6 != piVar4);
              local_58[1] = *local_58;
            }
          }
          local_18 = 0xffffffff;
          FUN_1007f222();
        } while (local_4c != local_48);
      }
      local_18 = 0xffffffff;
      FUN_1008045a();
      puVar2 = local_28;
      puVar3 = local_24;
    }
    local_24 = puVar3;
    local_28 = puVar2;
    piVar6 = local_50;
    switch(param_2) {
    case 1:
      FUN_100804b4();
      uVar5 = 0x10;
      break;
    case 2:
      FUN_1008045a();
      uVar5 = 0xc;
      break;
    case 3:
      FUN_10001fee();
      uVar5 = 0x18;
      break;
    default:
      goto code_r0x1007fe7f;
    case 8:
      FUN_10004eae();
      uVar5 = 0x20;
    }
    FUN_102283a0(*piVar6,uVar5);
  }
code_r0x1007fe7f:
  ExceptionList = local_20;
  return;
}

