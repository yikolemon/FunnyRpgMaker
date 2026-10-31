/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026b963 */

undefined4 FUN_1026b963(void *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_8;
  
  _memset(param_1,0,0x1ca);
  if (*param_2 != 0) {
    if ((*param_2 != 0x2e) || (param_2[1] == 0)) {
      local_8 = 0;
      do {
        uVar3 = FUN_1027bd70(param_2,&DAT_1035a724);
        if (uVar3 == 0) {
          return 0xffffffff;
        }
        sVar1 = param_2[uVar3];
        if (local_8 == 0) {
          if (0x3f < uVar3) {
            return 0xffffffff;
          }
          iVar2 = FUN_1027bc60(param_1,0x40,param_2,uVar3);
          if (iVar2 != 0) goto LAB_1026ba95;
          if (sVar1 != 0x2e) goto LAB_1026ba64;
          local_8 = 1;
        }
        else {
          if (local_8 == 1) {
            if (0x3f < uVar3) {
              return 0xffffffff;
            }
            if (sVar1 == 0x5f) {
              return 0xffffffff;
            }
            uVar4 = 0x40;
            iVar2 = (int)param_1 + 0x80;
          }
          else {
            if (local_8 != 2) {
              return 0xffffffff;
            }
            if (0xf < uVar3) {
              return 0xffffffff;
            }
            if ((sVar1 != 0) && (sVar1 != 0x2c)) {
              return 0xffffffff;
            }
            uVar4 = 0x10;
            iVar2 = (int)param_1 + 0x100;
          }
          iVar2 = FUN_1027bc60(iVar2,uVar4,param_2,uVar3);
          if (iVar2 != 0) goto LAB_1026ba95;
LAB_1026ba64:
          if (sVar1 == 0x2c) {
            return 0;
          }
          if (sVar1 == 0) {
            return 0;
          }
        }
        param_2 = param_2 + uVar3 + 1;
        local_8 = local_8 + 1;
      } while( true );
    }
    iVar2 = FUN_1027bc60((int)param_1 + 0x100,0x10,param_2 + 1,0xf);
    if (iVar2 != 0) {
LAB_1026ba95:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *(undefined2 *)((int)param_1 + 0x11e) = 0;
  }
  return 0;
}

