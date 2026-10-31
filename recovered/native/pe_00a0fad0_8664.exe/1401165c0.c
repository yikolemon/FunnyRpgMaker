/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401165c0 */

void FUN_1401165c0(undefined2 param_1,FILE *param_2,undefined8 param_3)

{
  char **ppcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_48;
  char local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    iVar2 = _fileno(param_2);
    puVar6 = &DAT_1401ca970;
    if ((iVar2 == -1) || (iVar2 = _fileno(param_2), iVar2 == -2)) {
      puVar5 = &DAT_1401ca970;
    }
    else {
      iVar2 = _fileno(param_2);
      uVar3 = _fileno(param_2);
      puVar5 = (undefined *)
               ((&DAT_1403551e0)[(longlong)iVar2 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
    }
    if (1 < (byte)(puVar5[0x39] - 1)) {
      iVar2 = _fileno(param_2);
      if ((iVar2 != -1) && (iVar2 = _fileno(param_2), iVar2 != -2)) {
        iVar2 = _fileno(param_2);
        uVar3 = _fileno(param_2);
        puVar6 = (undefined *)
                 ((ulonglong)(uVar3 & 0x3f) * 0x48 + (&DAT_1403551e0)[(longlong)iVar2 >> 6]);
      }
      iVar2 = 0;
      if ((char)puVar6[0x38] < '\0') {
        local_48 = 0;
        local_58 = param_3;
        iVar4 = FUN_140125c08(&local_48,local_44,5,param_1);
        if ((iVar4 == 0) && (0 < local_48)) {
          pcVar7 = local_44;
          do {
            iVar4 = FUN_1401163a8((int)*pcVar7,param_2,param_3);
            if (iVar4 == -1) break;
            iVar2 = iVar2 + 1;
            pcVar7 = pcVar7 + 1;
          } while (iVar2 < local_48);
        }
        goto LAB_140116732;
      }
    }
    ppcVar1 = &param_2->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -2;
    if (-1 < *(int *)ppcVar1) {
      *(undefined2 *)param_2->_ptr = param_1;
      param_2->_ptr = param_2->_ptr + 2;
      goto LAB_140116732;
    }
  }
  else {
    ppcVar1 = &param_2->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -2;
    if (-1 < *(int *)ppcVar1) {
      *(undefined2 *)param_2->_ptr = param_1;
      param_2->_ptr = param_2->_ptr + 2;
      goto LAB_140116732;
    }
  }
  FUN_14012de60(param_1,param_2,param_3);
LAB_140116732:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_38 ^ (ulonglong)auStack_78);
}

