/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a9b9 */

uint FUN_1026a9b9(wchar_t *param_1)

{
  wchar_t wVar1;
  ushort uVar2;
  bool bVar3;
  uint in_EAX;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  wchar_t *pwVar4;
  ushort *extraout_ECX;
  ushort *extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  
  pwVar4 = param_1;
  do {
    wVar1 = *pwVar4;
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),wVar1);
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L'\0');
  if (4 < (uint)((int)pwVar4 - (int)(param_1 + 1) >> 1)) {
    bVar3 = is_slash(*param_1);
    in_EAX = CONCAT31(extraout_var,bVar3);
    if (bVar3) {
      bVar3 = is_slash(*(wchar_t *)(extraout_EDX + 2));
      in_EAX = CONCAT31(extraout_var_00,bVar3);
      if (bVar3) {
        bVar3 = is_slash(*(wchar_t *)(extraout_EDX_00 + 4));
        in_EAX = CONCAT31(extraout_var_01,bVar3);
        if (!bVar3) {
          uVar2 = *(ushort *)(extraout_EDX_01 + 6);
          in_EAX = (uint)uVar2;
          do {
            if (uVar2 == 0) goto LAB_1026aa37;
            bVar3 = is_slash((wchar_t)in_EAX);
            uVar2 = *extraout_ECX;
            in_EAX = (uint)uVar2;
          } while (!bVar3);
          if (uVar2 != 0) {
            while( true ) {
              bVar3 = is_slash((wchar_t)in_EAX);
              in_EAX = CONCAT31(extraout_var_02,bVar3);
              if (bVar3) break;
              in_EAX = (uint)*extraout_ECX_00;
              if (*extraout_ECX_00 == 0) {
                in_EAX = 0;
LAB_1026aa63:
                return CONCAT31((int3)(in_EAX >> 8),1);
              }
            }
            if (*extraout_ECX_00 == 0) goto LAB_1026aa63;
          }
        }
      }
    }
  }
LAB_1026aa37:
  return in_EAX & 0xffffff00;
}

