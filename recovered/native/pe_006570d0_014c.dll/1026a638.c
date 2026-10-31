/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a638 */

undefined4 FUN_1026a638(uint param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  piVar5 = (int *)FUN_1027441e();
  if (piVar5 != (int *)0x0) {
    puVar1 = (uint *)*piVar5;
    for (puVar7 = puVar1; puVar7 != puVar1 + 0x24; puVar7 = puVar7 + 3) {
      if (*puVar7 == param_1) {
        if (puVar7 == (uint *)0x0) {
          return 0;
        }
        pcVar2 = (code *)puVar7[2];
        if (pcVar2 == (code *)0x0) {
          return 0;
        }
        if (pcVar2 == (code *)0x5) {
          puVar7[2] = 0;
          return 1;
        }
        if (pcVar2 != (code *)0x1) {
          iVar3 = piVar5[1];
          piVar5[1] = param_2;
          if (puVar7[1] == 8) {
            for (puVar8 = puVar1 + 9; puVar8 != puVar1 + 0x24; puVar8 = puVar8 + 3) {
              puVar8[2] = 0;
            }
            iVar4 = piVar5[2];
            iVar6 = iVar4;
            if (*puVar7 < 0xc0000092) {
              if (*puVar7 == 0xc0000091) {
                iVar6 = 0x84;
              }
              else if (*puVar7 == 0xc000008d) {
                iVar6 = 0x82;
              }
              else if (*puVar7 == 0xc000008e) {
                iVar6 = 0x83;
              }
              else if (*puVar7 == 0xc000008f) {
                iVar6 = 0x86;
              }
              else {
                if (*puVar7 != 0xc0000090) goto LAB_1026a74c;
                iVar6 = 0x81;
              }
LAB_1026a749:
              piVar5[2] = iVar6;
            }
            else {
              if (*puVar7 == 0xc0000092) {
                iVar6 = 0x8a;
                goto LAB_1026a749;
              }
              if (*puVar7 == 0xc0000093) {
                iVar6 = 0x85;
                goto LAB_1026a749;
              }
              if (*puVar7 == 0xc00002b4) {
                iVar6 = 0x8e;
                goto LAB_1026a749;
              }
              if (*puVar7 == 0xc00002b5) {
                iVar6 = 0x8d;
                goto LAB_1026a749;
              }
            }
LAB_1026a74c:
            (*(code *)PTR_guard_check_icall_1035d810)(8,iVar6);
            (*pcVar2)();
            piVar5[2] = iVar4;
          }
          else {
            puVar7[2] = 0;
            (*(code *)PTR_guard_check_icall_1035d810)(puVar7[1]);
            (*pcVar2)();
          }
          piVar5[1] = iVar3;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}

