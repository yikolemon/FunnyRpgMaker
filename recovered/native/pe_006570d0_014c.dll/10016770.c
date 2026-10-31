/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10016770 */

void __thiscall FUN_10016770(int *param_1,byte param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_60 [8];
  int *local_58;
  int *local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int *local_44;
  int *local_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  int *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_60;
  local_18 = 0xffffffff;
  local_1c = &LAB_10058fd0;
  local_20 = ExceptionList;
  piVar6 = (int *)*param_1;
  if ((param_2 != 1 || piVar6 != (int *)0x0) &&
     (param_2 != 8 && (param_2 & 0xfe) != 2 || piVar6 != (int *)0x0)) {
    ExceptionList = &local_20;
    local_54 = param_1;
    puVar2 = &stack0xfffffffc;
    puVar3 = auStack_60;
    if ((byte)(param_2 - 1) < 2) {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_18 = 1;
      if (param_2 == 2) {
        local_28 = &stack0xfffffffc;
        local_24 = auStack_60;
        FUN_10016ab0(piVar6[1] - *piVar6 >> 4);
        piVar6 = *(int **)*local_54;
        local_44 = (int *)((int *)*local_54)[1];
        if (piVar6 != local_44) {
          do {
            local_58 = piVar6;
            FUN_10016d10(piVar6);
            piVar6 = local_58 + 4;
          } while (piVar6 != local_44);
        }
      }
      else {
        FUN_10016ab0(piVar6[1]);
        local_58 = *(int **)*local_54;
        local_40 = (int *)*local_58;
        while (local_40 != local_58) {
          FUN_10016d10(local_40 + 10);
          FUN_10016fb8();
        }
      }
      if (local_50 != local_4c) {
        do {
          local_40 = *(int **)(local_4c + -0x10);
          uStack_3c = *(undefined4 *)(local_4c + -0xc);
          piStack_38 = *(int **)(local_4c + -8);
          uStack_34 = *(undefined4 *)(local_4c + -4);
          *(undefined1 *)(local_4c + -0x10) = 0;
          *(undefined4 *)(local_4c + -4) = 0;
          *(undefined4 *)(local_4c + -8) = 0;
          local_18 = 2;
          FUN_10013efc();
          local_4c = local_4c + -0x10;
          if (((uint)local_40 & 0xff) == 1) {
            local_2c = *(int **)*piStack_38;
            local_58 = (int *)*piStack_38;
            while (piVar6 = piStack_38, local_2c != local_58) {
              FUN_10016d10(local_2c + 10);
              FUN_10016fb8();
            }
            iVar1 = *piStack_38;
            FUN_10016fee(piStack_38,*(undefined4 *)(iVar1 + 4));
            *(int *)(iVar1 + 4) = iVar1;
            *(int *)iVar1 = iVar1;
            *(int *)(iVar1 + 8) = iVar1;
            piVar6[1] = 0;
          }
          else if (((uint)local_40 & 0xff) == 2) {
            piVar6 = (int *)*piStack_38;
            piVar4 = (int *)piStack_38[1];
            local_44 = piVar4;
            if (piVar6 != piVar4) {
              do {
                local_58 = piVar6;
                FUN_10016d10(piVar6);
                piVar6 = local_58 + 4;
              } while (piVar6 != local_44);
              piVar6 = (int *)*piStack_38;
              piVar4 = (int *)piStack_38[1];
            }
            local_58 = piStack_38;
            if (piVar6 != piVar4) {
              do {
                FUN_10013efc();
                piVar6 = piVar6 + 4;
              } while (piVar6 != piVar4);
              local_58[1] = *local_58;
            }
          }
          local_18 = 0xffffffff;
          FUN_10013efc();
        } while (local_50 != local_4c);
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
      puVar2 = local_28;
      puVar3 = local_24;
    }
    local_24 = puVar3;
    local_28 = puVar2;
    piVar6 = local_54;
    switch(param_2) {
    case 1:
      piVar4 = (int *)*local_54;
      FUN_10016fee(piVar4,*(undefined4 *)(*piVar4 + 4));
      FUN_102283a0(*piVar4,0x38);
      uVar5 = 8;
      break;
    case 2:
      FUN_100171ce();
      uVar5 = 0xc;
      break;
    case 3:
      FUN_10001fee();
      uVar5 = 0x18;
      break;
    default:
      goto code_r0x10016a2f;
    case 8:
      FUN_10004eae();
      uVar5 = 0x20;
    }
    FUN_102283a0(*piVar6,uVar5);
  }
code_r0x10016a2f:
  ExceptionList = local_20;
  return;
}

