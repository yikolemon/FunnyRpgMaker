/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018f85a */

void FUN_1018f85a(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  float fVar3;
  undefined4 in_stack_ffffff60;
  char local_90 [50];
  undefined1 local_5e;
  undefined2 local_5a;
  float local_58;
  float local_48;
  byte local_24;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)local_90;
  if (param_1 == (undefined4 *)0x0) {
    FUN_1018e2b2();
    local_5e = 1;
  }
  else {
    pcVar2 = local_90;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pcVar2 = *param_1;
      param_1 = param_1 + 1;
      pcVar2 = (char *)((int)pcVar2 + 4);
    }
  }
  fVar3 = local_58;
  if (local_58 <= 0.0) {
    local_58 = 13.0;
    local_24 = local_24 | 0x10;
    fVar3 = DAT_102b8eb8;
  }
  if (local_90[0] == '\0') {
    in_stack_ffffff60 = 0x1018f8ce;
    FUN_100fa4b1(local_90,0x28,"ProggyClean.ttf");
    fVar3 = local_58;
  }
  local_5a = 0x85;
  local_48 = fVar3 / DAT_102b8eb8 + local_48;
  FUN_1018f944(&DAT_102fad77,in_stack_ffffff60,fVar3,local_90,0);
  if (DAT_10388d00 != (local_10 ^ (uint)local_90)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

