/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00492082 */

uint __cdecl FUN_00492082(WCHAR *param_1,uint param_2,uint param_3,FILE *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  WCHAR *pWVar8;
  int *piVar9;
  char *local_8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (WCHAR *)0x0 && (param_3 <= (uint)(0xffffffff / (ulonglong)param_2))))) {
      piVar1 = &param_4->_flag;
      if ((*piVar1 & 0x4c0U) == 0) {
        local_8 = (char *)0x1000;
      }
      else {
        local_8 = (char *)param_4->_bufsiz;
      }
      pcVar7 = (char *)(param_2 * param_3);
      do {
        if (pcVar7 == (char *)0x0) {
          return param_3;
        }
        piVar9 = &param_4->_flag;
        if (((*piVar9 & 0xc0U) == 0) || (param_4->_base == (char *)0x0)) {
          if (local_8 <= pcVar7) {
            if (((*piVar9 & 0xc0U) != 0) && (iVar2 = FUN_00490869(param_4,param_5), iVar2 != 0))
            goto LAB_004921fd;
            pcVar6 = pcVar7;
            if (local_8 != (char *)0x0) {
              pcVar6 = pcVar7 + -((uint)pcVar7 % (uint)local_8);
            }
            pcVar3 = (char *)0xfffffffe;
            if (pcVar6 < (char *)0xfffffffe) {
              pcVar3 = pcVar6;
            }
            pWVar8 = param_1;
            pcVar6 = pcVar3;
            piVar9 = param_5;
            uVar4 = __fileno(param_4);
            pcVar5 = (char *)FUN_0049f0bf(uVar4,pWVar8,(uint)pcVar6,piVar9);
            if (pcVar5 != (char *)0xffffffff) {
              pcVar6 = pcVar5;
              if (pcVar3 < pcVar5) {
                pcVar6 = pcVar3;
              }
              pcVar7 = pcVar7 + -(int)pcVar6;
              if (pcVar3 <= pcVar5) goto LAB_004921e4;
            }
            LOCK();
            *piVar1 = *piVar1 | 0x10;
            UNLOCK();
LAB_004921fd:
            return (uint)((int)(param_2 * param_3) - (int)pcVar7) / param_2;
          }
          iVar2 = FUN_0049fe0e((byte)*param_1,param_4,param_5);
          if (iVar2 == -1) goto LAB_004921fd;
          local_8 = (char *)param_4->_bufsiz;
          pcVar7 = pcVar7 + -1;
          if ((int)local_8 < 1) {
            local_8 = (char *)0x1;
          }
          pcVar6 = (char *)0x1;
        }
        else {
          if ((int)param_4->_base < 0) {
            LOCK();
            *piVar9 = *piVar9 | 0x10;
            UNLOCK();
            goto LAB_004921fd;
          }
          if ((*piVar9 & 1U) != 0) goto LAB_004921fd;
          pcVar6 = pcVar7;
          if (param_4->_base <= pcVar7) {
            pcVar6 = param_4->_base;
          }
          FUN_004878c0((uint *)param_4->_ptr,(uint *)param_1,(uint)pcVar6);
          param_4->_base = param_4->_base + -(int)pcVar6;
          pcVar7 = pcVar7 + -(int)pcVar6;
          param_4->_ptr = pcVar6 + (int)param_4->_ptr;
        }
LAB_004921e4:
        param_1 = (WCHAR *)((int)param_1 + (int)pcVar6);
      } while( true );
    }
    *(undefined1 *)(param_5 + 7) = 1;
    param_5[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  }
  return 0;
}

