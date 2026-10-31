/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140cf850f */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140cf84b6) overlaps instruction at (ram,0x000140cf84b4)
    */

void Unwind_140cf850f(char *param_1,byte *param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  char *in_RAX;
  char cVar4;
  byte bVar5;
  uint unaff_EBP;
  undefined1 *unaff_RSI;
  
  cVar4 = *in_RAX;
  *in_RAX = *in_RAX + -0x60;
  uVar1 = *(uint *)(in_RAX + (longlong)param_1 * 4);
  if (SCARRY1(cVar4,-0x60) == *in_RAX < '\0') {
    *(uint *)((ulonglong)uVar1 - 0x1e587774) = *(uint *)((ulonglong)uVar1 - 0x1e587774) | 0xfffffff2
    ;
    out((short)param_2,uVar1);
    out(*unaff_RSI,(short)param_2);
    *param_1 = *param_1 + 'H';
    in(0xe4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = CONCAT22((short)(uVar1 >> 0x10),(ushort)(byte)uVar1 * (ushort)(byte)param_1[-0x80]);
  puVar2 = (uint *)(ulonglong)uVar1;
  *puVar2 = *puVar2 | unaff_EBP;
  do {
    out(0x75,uVar1);
    cVar4 = (char)param_1 + *(char *)((longlong)puVar2 + -0x15e777f1);
    lVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar4);
    if (lVar3 != 1 && cVar4 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1 = (char *)(lVar3 + -2);
  } while (param_1 != (char *)0x0 && cVar4 == '\0');
  *param_2 = *param_2 | 0x28;
  cVar4 = *param_2 == 0;
  while( true ) {
    lVar3 = func_0x000128b177af();
    param_1 = param_1 + -1;
    if (param_1 == (char *)0x0 || cVar4 == '\0') break;
    bVar5 = (byte)((ulonglong)param_1 >> 8) | *(byte *)(lVar3 + -0x140a120e);
    param_1 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(bVar5,(char)param_1));
    cVar4 = bVar5 == 0;
    func_0x000168da052a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

