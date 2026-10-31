/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140e9840f */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140e98410) overlaps instruction at (ram,0x000140e9840f)
    */

void Unwind_140e9840f(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined3 uVar5;
  undefined4 uVar4;
  undefined4 in_register_00000004;
  char cVar6;
  int iVar3;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  cVar2 = (char)in_EAX + cVar6;
  iVar3 = CONCAT31(uVar5,cVar2);
  if (cVar2 != '\0' && SCARRY1((char)in_EAX,cVar6) == cVar2 < '\0') {
    *(int *)CONCAT44(in_register_00000004,iVar3) =
         *(int *)CONCAT44(in_register_00000004,iVar3) + iVar3;
    *(char *)CONCAT44(in_register_00000004,iVar3) =
         *(char *)CONCAT44(in_register_00000004,iVar3) + cVar2;
    uVar4 = CONCAT31(uVar5,cVar2 + '\x7f');
    pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar4) + -5);
    *pcVar1 = *pcVar1 + (char)param_2;
    *(char *)CONCAT44(in_register_00000004,uVar4) =
         *(char *)CONCAT44(in_register_00000004,uVar4) + cVar2 + '\x7f';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)CONCAT44(in_register_00000004,iVar3) =
       *(int *)CONCAT44(in_register_00000004,iVar3) + iVar3;
  *(char *)CONCAT44(in_register_00000004,iVar3) =
       *(char *)CONCAT44(in_register_00000004,iVar3) + cVar2;
  *(int *)CONCAT44(in_register_00000004,iVar3) =
       *(int *)CONCAT44(in_register_00000004,iVar3) + iVar3;
  *(char *)CONCAT44(in_register_00000004,iVar3) =
       *(char *)CONCAT44(in_register_00000004,iVar3) + cVar2;
  *(int *)CONCAT44(in_register_00000004,iVar3) =
       *(int *)CONCAT44(in_register_00000004,iVar3) + iVar3;
  *(char *)CONCAT44(in_register_00000004,iVar3) =
       *(char *)CONCAT44(in_register_00000004,iVar3) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

