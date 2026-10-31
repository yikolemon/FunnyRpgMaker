/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403276b6 */

void FUN_1403276b6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_14062a630;
  lVar1 = *(longlong *)(DAT_14062a630 + 0x24f8);
  while ((lVar1 != 0 && (*(longlong *)(lVar1 + 0x188) == *(longlong *)(lVar4 + 0x1608)))) {
    FUN_140312b68(" \"%s\"");
    FUN_140379900();
    lVar1 = *(longlong *)(lVar4 + 0x24f8);
  }
  lVar1 = *(longlong *)(lVar4 + 0x1608);
  plVar2 = *(longlong **)(lVar4 + 0x2560);
  while ((plVar2 != (longlong *)0x0 && (*plVar2 == lVar1))) {
    FUN_140312b68("");
    FUN_140363f00();
    plVar2 = *(longlong **)(lVar4 + 0x2560);
  }
  lVar3 = *(longlong *)(lVar4 + 0x2638);
  while ((lVar3 != 0 && (**(longlong **)(lVar3 + 0x28) == lVar1))) {
    FUN_140312b68(
                 "play lines containing \"xxx\"\n  \"xxx,yyy\"  display lines containing \"xxx\" or \"yyy\"\n  \"-xxx\"     hide lines containing \"xxx\""
                 );
    FUN_1403603fd();
    lVar3 = *(longlong *)(lVar4 + 0x2638);
  }
  if (*(char *)(lVar1 + 0x1bb) == '\x01') {
    FUN_140312b68("r_storage %03d \"%.*s\"");
    FUN_1403623d5();
  }
  if ((int)*(short *)(param_1 + 4) < *(int *)(lVar1 + 0x1e0)) {
    do {
      FUN_140312b68("s\"");
      FUN_14035ec79();
    } while ((int)*(short *)(param_1 + 4) < *(int *)(lVar1 + 0x1e0));
  }
  if ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar4 + 0x2138)) {
    do {
      FUN_140312b68("ment \"%s\"");
      FUN_14032a96a();
    } while ((int)*(short *)(param_1 + 0xe) < *(int *)(lVar4 + 0x2138));
  }
  if ((int)*(short *)(param_1 + 2) < *(int *)(lVar1 + 0x148)) {
    do {
      FUN_140312b68("t been submitted by user code, or has not moved the cursor vertically!");
      FUN_14032981f();
    } while ((int)*(short *)(param_1 + 2) < *(int *)(lVar1 + 0x148));
  }
  if (*(short *)(param_1 + 0x14) < *(short *)(lVar4 + 0x2864)) {
    do {
      FUN_140312b68(
                   "ulate item height! First item hasn\'t been submitted by user code, or has not moved the cursor vertically!"
                   );
      if ((*(byte *)(lVar4 + 0x1fa0) & 0x40) == 0) {
        FUN_140327543();
        *(undefined1 *)
         (*(longlong *)(lVar4 + 0x15e0) + -10 + (longlong)*(int *)(lVar4 + 0x15d8) * 0x78) = 0;
      }
      else {
        FUN_140327b46();
      }
    } while (*(short *)(param_1 + 0x14) < *(short *)(lVar4 + 0x2864));
  }
  if ((int)*(short *)(param_1 + 6) < *(int *)(lVar4 + 0x20e8)) {
    do {
      FUN_140312b68("02d] where %03d, insert %03d, delete %03d, char_storage %03d \"%.*s\"");
      FUN_140312af5(1);
    } while ((int)*(short *)(param_1 + 6) < *(int *)(lVar4 + 0x20e8));
  }
  if ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar4 + 0x2128)) {
    do {
      FUN_140312b68("\"");
      FUN_140327a18();
    } while ((int)*(short *)(param_1 + 0x10) < *(int *)(lVar4 + 0x2128));
  }
  if ((int)*(short *)(param_1 + 8) < *(int *)(lVar4 + 0x20f8)) {
    do {
      FUN_140312b68("%03d, delete %03d, char_storage %03d \"%.*s\"");
      FUN_14031319b(1);
    } while ((int)*(short *)(param_1 + 8) < *(int *)(lVar4 + 0x20f8));
  }
  if ((int)*(short *)(param_1 + 10) < *(int *)(lVar4 + 0x2108)) {
    do {
      FUN_140312b68(
                   "s\n  \"xxx\"      display lines containing \"xxx\"\n  \"xxx,yyy\"  display lines containing \"xxx\" or \"yyy\"\n  \"-xxx\"     hide lines containing \"xxx\""
                   );
      FUN_140328fe1();
    } while ((int)*(short *)(param_1 + 10) < *(int *)(lVar4 + 0x2108));
  }
  if ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar4 + 0x2118)) {
    do {
      FUN_140312b68("%08X, Parent: 0x%08X, Window: \"%s\"");
      FUN_1403274f8();
    } while ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar4 + 0x2118));
  }
  return;
}

