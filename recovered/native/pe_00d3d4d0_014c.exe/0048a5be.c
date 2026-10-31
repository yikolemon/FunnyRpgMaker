/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048a5be */

/* Library Function - Single Match
    public: char * __thiscall __crt_stdio_output::formatting_buffer::scratch_data<char>(void)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

char * __thiscall __crt_stdio_output::formatting_buffer::scratch_data<char>(formatting_buffer *this)

{
  formatting_buffer *pfVar1;
  uint uVar2;
  
  pfVar1 = *(formatting_buffer **)(this + 0x404);
  uVar2 = count<char>(this);
  if (pfVar1 == (formatting_buffer *)0x0) {
    pfVar1 = this;
  }
  return (char *)(pfVar1 + uVar2);
}

