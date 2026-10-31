/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005205a */

/* WARNING: Removing unreachable block (ram,0x100520f5) */
/* WARNING: Removing unreachable block (ram,0x10052103) */
/* WARNING: Removing unreachable block (ram,0x1005210c) */
/* WARNING: Removing unreachable block (ram,0x1005210f) */
/* WARNING: Removing unreachable block (ram,0x1005211a) */
/* WARNING: Removing unreachable block (ram,0x1005212d) */
/* WARNING: Removing unreachable block (ram,0x10052121) */
/* WARNING: Removing unreachable block (ram,0x10052132) */
/* WARNING: Removing unreachable block (ram,0x10052128) */
/* WARNING: Removing unreachable block (ram,0x10052134) */

int * __thiscall FUN_1005205a(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_14;
  FUN_10016fb8();
  piVar6 = (int *)param_2[2];
  if ((*(char *)(*param_2 + 0xd) == '\0') &&
     (piVar6 = (int *)*param_2, *(char *)(param_2[2] + 0xd) == '\0')) {
    piVar6 = (int *)param_2[2];
  }
  piVar4 = (int *)param_2[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar4;
  }
  if (*(int **)(*param_1 + 4) == param_2) {
    *(int **)(*param_1 + 4) = piVar6;
  }
  else if ((int *)*piVar4 == param_2) {
    *piVar4 = (int)piVar6;
  }
  else {
    piVar4[2] = (int)piVar6;
  }
  puVar5 = (undefined4 *)*param_1;
  if ((int *)*puVar5 == param_2) {
    cVar1 = *(char *)((int)piVar6 + 0xd);
    piVar3 = piVar4;
    piVar2 = piVar6;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar2 + 0xd);
      piVar3 = piVar2;
      piVar2 = (int *)*piVar2;
    }
    *puVar5 = piVar3;
    puVar5 = (undefined4 *)*param_1;
  }
  if ((int *)puVar5[2] == param_2) {
    cVar1 = *(char *)((int)piVar6 + 0xd);
    piVar3 = piVar4;
    piVar2 = piVar6;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(piVar2[2] + 0xd);
      piVar3 = piVar2;
      piVar2 = (int *)piVar2[2];
    }
    puVar5[2] = piVar3;
  }
  if ((char)param_2[3] == '\x01') {
LAB_10052150:
    piVar3 = piVar4;
    if ((piVar6 == *(int **)(*param_1 + 4)) || ((char)piVar6[3] != '\x01')) goto LAB_10052247;
    piVar4 = (int *)*piVar3;
    if (piVar6 == piVar4) {
      piVar4 = (int *)piVar3[2];
      if ((char)piVar4[3] == '\0') {
        *(undefined1 *)(piVar4 + 3) = 1;
        *(undefined1 *)(piVar3 + 3) = 0;
        FUN_1005227c(piVar3);
        piVar4 = (int *)piVar3[2];
      }
      if (*(char *)((int)piVar4 + 0xd) == '\0') {
        if (*(char *)(*piVar4 + 0xc) == '\x01') {
          if (*(char *)(piVar4[2] + 0xc) == '\x01') goto LAB_100521d7;
        }
        else if (*(char *)(piVar4[2] + 0xc) == '\x01') {
          *(undefined1 *)(*piVar4 + 0xc) = 1;
          *(undefined1 *)(piVar4 + 3) = 0;
          FUN_100522b8(piVar4);
          piVar4 = (int *)piVar3[2];
        }
        *(char *)(piVar4 + 3) = (char)piVar3[3];
        *(undefined1 *)(piVar3 + 3) = 1;
        *(undefined1 *)(piVar4[2] + 0xc) = 1;
        FUN_1005227c(piVar3);
        goto LAB_10052247;
      }
    }
    else {
      if ((char)piVar4[3] == '\0') {
        *(undefined1 *)(piVar4 + 3) = 1;
        *(undefined1 *)(piVar3 + 3) = 0;
        FUN_100522b8(piVar3);
        piVar4 = (int *)*piVar3;
      }
      if (*(char *)((int)piVar4 + 0xd) == '\0') {
        if (*(char *)(piVar4[2] + 0xc) == '\x01') {
          if (*(char *)(*piVar4 + 0xc) == '\x01') {
LAB_100521d7:
            *(undefined1 *)(piVar4 + 3) = 0;
            goto LAB_100521db;
          }
        }
        else if (*(char *)(*piVar4 + 0xc) == '\x01') {
          *(undefined1 *)(piVar4[2] + 0xc) = 1;
          *(undefined1 *)(piVar4 + 3) = 0;
          FUN_1005227c(piVar4);
          piVar4 = (int *)*piVar3;
        }
        *(char *)(piVar4 + 3) = (char)piVar3[3];
        *(undefined1 *)(piVar3 + 3) = 1;
        *(undefined1 *)(*piVar4 + 0xc) = 1;
        FUN_100522b8(piVar3);
LAB_10052247:
        *(undefined1 *)(piVar6 + 3) = 1;
        goto LAB_1005224b;
      }
    }
LAB_100521db:
    piVar4 = (int *)piVar3[1];
    piVar6 = piVar3;
    goto LAB_10052150;
  }
LAB_1005224b:
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_14)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

