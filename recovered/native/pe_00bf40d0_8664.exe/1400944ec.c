/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400944ec */

undefined8 FUN_1400944ec(undefined1 (*param_1) [32],ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [32];
  longlong lVar6;
  
  FUN_1400b3c00(param_1,0,0x1ca);
  iVar2 = 0;
  if (*param_2 != 0) {
    if ((*param_2 != 0x2e) || (param_2[1] == 0)) {
      do {
        uVar4 = FUN_1400a70b0(param_2,(ushort *)&DAT_14011fdd8);
        if (uVar4 == 0) {
          return 0xffffffff;
        }
        uVar1 = param_2[uVar4];
        if (iVar2 == 0) {
          if (0x3f < uVar4) {
            return 0xffffffff;
          }
          iVar3 = FUN_1400a6f60((short *)param_1,0x40,(longlong)param_2,uVar4);
          if (iVar3 != 0) goto LAB_14009463b;
          if (uVar1 != 0x2e) goto LAB_1400945ee;
          iVar2 = 1;
        }
        else {
          if (iVar2 == 1) {
            if (0x3f < uVar4) {
              return 0xffffffff;
            }
            if (uVar1 == 0x5f) {
              return 0xffffffff;
            }
            pauVar5 = param_1 + 4;
            lVar6 = 0x40;
          }
          else {
            if (iVar2 != 2) {
              return 0xffffffff;
            }
            if (0xf < uVar4) {
              return 0xffffffff;
            }
            if ((uVar1 != 0) && (uVar1 != 0x2c)) {
              return 0xffffffff;
            }
            pauVar5 = param_1 + 8;
            lVar6 = 0x10;
          }
          iVar3 = FUN_1400a6f60((short *)pauVar5,lVar6,(longlong)param_2,uVar4);
          if (iVar3 != 0) goto LAB_14009463b;
LAB_1400945ee:
          if (uVar1 == 0x2c) {
            return 0;
          }
          if (uVar1 == 0) {
            return 0;
          }
        }
        param_2 = param_2 + uVar4 + 1;
        iVar2 = iVar2 + 1;
      } while( true );
    }
    iVar2 = FUN_1400a6f60((short *)(param_1 + 8),0x10,(longlong)(param_2 + 1),0xf);
    if (iVar2 != 0) {
LAB_14009463b:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *(undefined2 *)(param_1[8] + 0x1e) = 0;
  }
  return 0;
}

