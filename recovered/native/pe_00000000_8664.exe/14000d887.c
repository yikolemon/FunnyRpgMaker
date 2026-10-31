/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000d887 */

undefined8 * Unwind_14000d887(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char *in_RAX;
  undefined8 uVar4;
  undefined1 local_res20 [8];
  undefined8 in_stack_000000c8;
  undefined8 uStack00000000000000f0;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  uStack00000000000000f0 = 0xfffffffffffffffe;
  if (param_1 != (char *)*param_3) {
    FUN_1400027d2(&stack0x000000d0,"iterator does not fit current value");
    FUN_14000e4a8(local_res20,0xca,&stack0x000000d0,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(local_res20,&DAT_140ee3af0);
  }
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x8000000000000000;
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = param_3[2];
    FUN_14000ef7c(lVar3 + 0x10,*(undefined8 *)(lVar2 + 8),lVar3);
    FUN_140004b06(*(longlong *)(lVar2 + 8) + -0x10);
    *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + -0x10;
    param_2[2] = lVar3;
  }
  else if (cVar1 == '\x01') {
    uVar4 = FUN_14000ebda(*(undefined8 *)(param_1 + 8),param_3[1]);
    param_2[1] = uVar4;
  }
  else {
    param_2[3] = 1;
    if (5 < (byte)(cVar1 - 3U)) {
      in_stack_000000c8 = FUN_14000ea3a(param_1);
      FUN_14000e963(&stack0x000000d0,"cannot use erase() with ");
      FUN_14000e7f2(&stack0x00000090,0x133,&stack0x000000d0,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_14018f0a0(&stack0x00000090,&DAT_140ee3b30);
    }
    if (param_3[3] != 0) {
      FUN_1400027d2(&stack0x000000d0,"iterator out of range");
      FUN_14000e4a8(&stack0x00000058,0xcd,&stack0x000000d0,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_14018f0a0(&stack0x00000058,&DAT_140ee3af0);
    }
    if (cVar1 == '\b') {
      FUN_1400022f6(*(undefined8 *)(param_1 + 8));
      thunk_FUN_14018e090(*(undefined8 *)(param_1 + 8),0x28);
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    else if (cVar1 == '\x03') {
      FUN_14000109c(*(undefined8 *)(param_1 + 8));
      thunk_FUN_14018e090(*(undefined8 *)(param_1 + 8),0x20);
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    *param_1 = '\0';
  }
  return param_2;
}

