/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f512 */

int FUN_18017f512(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  ulonglong unaff_RBP;
  int iVar5;
  
  iVar5 = 0;
  do {
    if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18017f53e:
      if (*(ulonglong *)(param_1 + 200) <= *(ulonglong *)(param_1 + 0xc0)) {
        return iVar5;
      }
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x30) == 0) {
          return iVar5;
        }
        goto LAB_18017f53e;
      }
    }
    cVar1 = *param_2;
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),cVar1);
    iVar3 = FUN_18017f5f3(unaff_RBP & 0xffffffff);
    if (iVar3 == 0) {
      return iVar5;
    }
    pcVar4 = *(char **)(param_1 + 0xc0);
    if (pcVar4 < *(char **)(param_1 + 200)) {
LAB_18017f581:
      *(char **)(param_1 + 0xc0) = pcVar4 + 1;
      cVar2 = *pcVar4;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_180176673(param_1);
        pcVar4 = *(char **)(param_1 + 0xc0);
        goto LAB_18017f581;
      }
      cVar2 = '\0';
    }
    iVar5 = (int)cVar1 + iVar5 * 10 + -0x30;
    *param_2 = cVar2;
    if ((0xccccccc < iVar5) || ((iVar5 == 0xccccccc && ('7' < cVar2)))) {
      FUN_1801765d0("integer parse overflow");
      return 0;
    }
  } while( true );
}

