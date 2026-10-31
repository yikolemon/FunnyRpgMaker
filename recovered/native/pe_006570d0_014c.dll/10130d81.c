/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10130d81 */

undefined4 FUN_10130d81(undefined4 param_1,uint *param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_10 [3];
  char local_d;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_10;
  local_d = (param_3 & *param_2) == param_3;
  uVar3 = *param_2 & param_3;
  if ((uVar3 != 0) && (uVar3 != param_3)) {
    *(uint *)(DAT_1039d74c + 0x1e4c) = *(uint *)(DAT_1039d74c + 0x1e4c) | 0x1000;
  }
  cVar1 = FUN_1012ff1a(param_1,&local_d);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    if (local_d == '\x01') {
      param_3 = param_3 | *param_2;
    }
    else {
      param_3 = ~param_3 & *param_2;
    }
    *param_2 = param_3;
    uVar2 = 1;
  }
  if (DAT_10388d00 == (local_c ^ (uint)auStack_10)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

