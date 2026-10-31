/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f3d3 */

void FUN_18017f3d3(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
LAB_18017f3df:
  do {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar2 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
      if (iVar2 == 0) goto LAB_18017f407;
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_18017f3f7;
LAB_18017f44c:
      if (*(longlong *)(param_1 + 0x10) != 0) {
        iVar2 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
        if (iVar2 == 0) goto LAB_18017f47c;
        if (*(int *)(param_1 + 0x30) == 0) {
          return;
        }
      }
      if (*(ulonglong *)(param_1 + 200) <= *(ulonglong *)(param_1 + 0xc0)) {
        return;
      }
LAB_18017f47c:
      if (*param_2 != '#') {
        return;
      }
      do {
        if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18017f4a1:
          if (*(ulonglong *)(param_1 + 200) <= *(ulonglong *)(param_1 + 0xc0)) goto LAB_18017f3df;
        }
        else {
          iVar2 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
          if (iVar2 != 0) {
            if (*(int *)(param_1 + 0x30) != 0) goto LAB_18017f4a1;
            goto LAB_18017f3df;
          }
        }
        if ((*param_2 == '\n') || (*param_2 == '\r')) goto LAB_18017f3df;
        pcVar3 = *(char **)(param_1 + 0xc0);
        if (pcVar3 < *(char **)(param_1 + 200)) {
LAB_18017f4ef:
          *(char **)(param_1 + 0xc0) = pcVar3 + 1;
          cVar1 = *pcVar3;
        }
        else {
          if (*(int *)(param_1 + 0x30) != 0) {
            FUN_180176673(param_1);
            pcVar3 = *(char **)(param_1 + 0xc0);
            goto LAB_18017f4ef;
          }
          cVar1 = '\0';
        }
        *param_2 = cVar1;
      } while( true );
    }
LAB_18017f3f7:
    if (*(ulonglong *)(param_1 + 200) <= *(ulonglong *)(param_1 + 0xc0)) goto LAB_18017f44c;
LAB_18017f407:
    iVar2 = FUN_18017f5d2(*param_2);
    if (iVar2 == 0) goto LAB_18017f44c;
    pcVar3 = *(char **)(param_1 + 0xc0);
    if (pcVar3 < *(char **)(param_1 + 200)) {
LAB_18017f43b:
      *(char **)(param_1 + 0xc0) = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_180176673(param_1);
        pcVar3 = *(char **)(param_1 + 0xc0);
        goto LAB_18017f43b;
      }
      cVar1 = '\0';
    }
    *param_2 = cVar1;
  } while( true );
}

