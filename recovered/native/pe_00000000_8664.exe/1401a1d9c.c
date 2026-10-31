/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a1d9c */

undefined8 FUN_1401a1d9c(char *param_1,undefined8 *param_2)

{
  char cVar1;
  char *in_RAX;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  lVar3 = lVar2;
  do {
    cVar1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    if ((cVar1 != (&DAT_140eb5c54)[lVar3]) && (cVar1 != (&DAT_140eb5c5c)[lVar3]))
    goto LAB_1401a1ddd;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 5);
  lVar2 = 1;
LAB_1401a1ddd:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)lVar2);
}

