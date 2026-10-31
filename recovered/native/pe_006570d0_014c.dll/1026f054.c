/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026f054 */

uint FUN_1026f054(char *param_1,uint param_2,uint param_3,FILE *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *local_8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (char *)0x0 && (param_3 <= (uint)(0xffffffff / (ulonglong)param_2))))) {
      piVar1 = &param_4->_flag;
      if ((*piVar1 & 0x4c0U) == 0) {
        local_8 = (char *)0x1000;
      }
      else {
        local_8 = (char *)param_4->_bufsiz;
      }
      pcVar8 = (char *)(param_2 * param_3);
      do {
        if (pcVar8 == (char *)0x0) {
          return param_3;
        }
        piVar2 = &param_4->_flag;
        if (((*piVar2 & 0xc0U) == 0) || (param_4->_base == (char *)0x0)) {
          if (local_8 <= pcVar8) {
            if (((*piVar2 & 0xc0U) != 0) && (iVar3 = FUN_1026d759(param_4,param_5), iVar3 != 0))
            goto LAB_1026f1cf;
            pcVar7 = pcVar8;
            if (local_8 != (char *)0x0) {
              pcVar7 = pcVar8 + -((uint)pcVar8 % (uint)local_8);
            }
            pcVar4 = (char *)0xfffffffe;
            if (pcVar7 < (char *)0xfffffffe) {
              pcVar4 = pcVar7;
            }
            pcVar7 = param_1;
            pcVar6 = pcVar4;
            iVar3 = param_5;
            iVar5 = __fileno(param_4);
            pcVar6 = (char *)FUN_1027eca6(iVar5,pcVar7,pcVar6,iVar3);
            if (pcVar6 != (char *)0xffffffff) {
              pcVar7 = pcVar6;
              if (pcVar4 < pcVar6) {
                pcVar7 = pcVar4;
              }
              pcVar8 = pcVar8 + -(int)pcVar7;
              if (pcVar4 <= pcVar6) goto LAB_1026f1b6;
            }
            LOCK();
            *piVar1 = *piVar1 | 0x10;
            UNLOCK();
LAB_1026f1cf:
            return (uint)((int)(param_2 * param_3) - (int)pcVar8) / param_2;
          }
          iVar3 = FUN_1027f9ee((int)*param_1,param_4,param_5);
          if (iVar3 == -1) goto LAB_1026f1cf;
          local_8 = (char *)param_4->_bufsiz;
          pcVar8 = pcVar8 + -1;
          if ((int)local_8 < 1) {
            local_8 = (char *)0x1;
          }
          pcVar7 = (char *)0x1;
        }
        else {
          if ((int)param_4->_base < 0) {
            LOCK();
            *piVar2 = *piVar2 | 0x10;
            UNLOCK();
            goto LAB_1026f1cf;
          }
          if ((*piVar2 & 1U) != 0) goto LAB_1026f1cf;
          pcVar7 = pcVar8;
          if (param_4->_base <= pcVar8) {
            pcVar7 = param_4->_base;
          }
          FUN_1025b2d0(param_4->_ptr,param_1,pcVar7);
          param_4->_base = param_4->_base + -(int)pcVar7;
          pcVar8 = pcVar8 + -(int)pcVar7;
          param_4->_ptr = pcVar7 + (int)param_4->_ptr;
        }
LAB_1026f1b6:
        param_1 = param_1 + (int)pcVar7;
      } while( true );
    }
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_5);
  }
  return 0;
}

