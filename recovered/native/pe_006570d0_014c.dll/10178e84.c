/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10178e84 */

void __fastcall FUN_10178e84(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
LAB_10178e8a:
  do {
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar2 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
      if (iVar2 == 0) goto LAB_10178eb1;
      if (*(int *)(param_1 + 0x20) != 0) goto LAB_10178ea3;
LAB_10178ef1:
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar2 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
        if (iVar2 == 0) goto LAB_10178f20;
        if (*(int *)(param_1 + 0x20) == 0) {
          return;
        }
      }
      if (*(uint *)(param_1 + 0xb0) <= *(uint *)(param_1 + 0xac)) {
        return;
      }
LAB_10178f20:
      if (*param_2 != '#') {
        return;
      }
      do {
        if (*(int *)(param_1 + 0x10) == 0) {
LAB_10178f42:
          if (*(uint *)(param_1 + 0xb0) <= *(uint *)(param_1 + 0xac)) goto LAB_10178e8a;
        }
        else {
          iVar2 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
          if (iVar2 != 0) {
            if (*(int *)(param_1 + 0x20) != 0) goto LAB_10178f42;
            goto LAB_10178e8a;
          }
        }
        if ((*param_2 == '\n') || (*param_2 == '\r')) goto LAB_10178e8a;
        pcVar3 = *(char **)(param_1 + 0xac);
        if (pcVar3 < *(char **)(param_1 + 0xb0)) {
LAB_10178f8a:
          *(char **)(param_1 + 0xac) = pcVar3 + 1;
          cVar1 = *pcVar3;
        }
        else {
          if (*(int *)(param_1 + 0x20) != 0) {
            FUN_10170e8c();
            pcVar3 = *(char **)(param_1 + 0xac);
            goto LAB_10178f8a;
          }
          cVar1 = '\0';
        }
        *param_2 = cVar1;
      } while( true );
    }
LAB_10178ea3:
    if (*(uint *)(param_1 + 0xb0) <= *(uint *)(param_1 + 0xac)) goto LAB_10178ef1;
LAB_10178eb1:
    iVar2 = FUN_10179047();
    if (iVar2 == 0) goto LAB_10178ef1;
    pcVar3 = *(char **)(param_1 + 0xac);
    if (pcVar3 < *(char **)(param_1 + 0xb0)) {
LAB_10178ee2:
      *(char **)(param_1 + 0xac) = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_10170e8c();
        pcVar3 = *(char **)(param_1 + 0xac);
        goto LAB_10178ee2;
      }
      cVar1 = '\0';
    }
    *param_2 = cVar1;
  } while( true );
}

