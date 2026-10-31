/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048de14 */

undefined4 __cdecl FUN_0048de14(short *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  int local_8;
  
  _memset(param_1,0,0x1ca);
  if (*param_2 != 0) {
    if ((*param_2 != 0x2e) || (param_2[1] == 0)) {
      local_8 = 0;
      do {
        uVar3 = FUN_0049aa40(param_2,(ushort *)&DAT_00508244);
        if (uVar3 == 0) {
          return 0xffffffff;
        }
        uVar1 = param_2[uVar3];
        if (local_8 == 0) {
          if (0x3f < uVar3) {
            return 0xffffffff;
          }
          iVar2 = FUN_0049a930(param_1,0x40,(int)param_2,uVar3);
          if (iVar2 != 0) goto LAB_0048df46;
          if (uVar1 != 0x2e) goto LAB_0048df15;
          local_8 = 1;
        }
        else {
          if (local_8 == 1) {
            if (0x3f < uVar3) {
              return 0xffffffff;
            }
            if (uVar1 == 0x5f) {
              return 0xffffffff;
            }
            iVar2 = 0x40;
            psVar4 = param_1 + 0x40;
          }
          else {
            if (local_8 != 2) {
              return 0xffffffff;
            }
            if (0xf < uVar3) {
              return 0xffffffff;
            }
            if ((uVar1 != 0) && (uVar1 != 0x2c)) {
              return 0xffffffff;
            }
            iVar2 = 0x10;
            psVar4 = param_1 + 0x80;
          }
          iVar2 = FUN_0049a930(psVar4,iVar2,(int)param_2,uVar3);
          if (iVar2 != 0) goto LAB_0048df46;
LAB_0048df15:
          if (uVar1 == 0x2c) {
            return 0;
          }
          if (uVar1 == 0) {
            return 0;
          }
        }
        param_2 = param_2 + uVar3 + 1;
        local_8 = local_8 + 1;
      } while( true );
    }
    iVar2 = FUN_0049a930(param_1 + 0x80,0x10,(int)(param_2 + 1),0xf);
    if (iVar2 != 0) {
LAB_0048df46:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    param_1[0x8f] = 0;
  }
  return 0;
}

